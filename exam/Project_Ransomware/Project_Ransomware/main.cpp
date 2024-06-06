#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define DEFAULT_RECORD_SIZE (26)
#define START_OFFS
#define END_OFFSET (1)
typedef unsigned short  ushort;
typedef unsigned long   ulong;

// Zip Local file header static
#pragma pack(push,1)
typedef struct _zip_localfile_h
{
    ulong   signature;
    ushort  ver;        // Version needed to extract (minimum)
    ushort  flag;       // General purpose bit flag
    ushort  fr_compression;     // Compression method
    ushort  time;       // File last modification time
    ushort  date;       // File last modification date
    ulong   crc;        // CRC-32
    ulong   compressed_size;    // Compressed size
    ulong   uncompressed_size;  // Uncompressed size

    // Variable Type
    ushort  filename_len;       // File name length (n)
    ushort  extra_len;          // Extra field length (m)
}zip_localfile_h;

// main
int main()
{
    FILE* zip_file = 0;
    zip_localfile_h list;
    unsigned int eip = 0;
    int full_size = 0;
    int target_offset[2] = { 0,0 };
    int _flag = 0;

    list = { 0x00, };
    zip_file = fopen("C:\\Users\\user\\Downloads\\Parse_DOCX\\example.hacker_bye(2).zip", "r");
    fseek(zip_file, 0, FILE_END);

    full_size = ftell(zip_file);  // 파일 처음부터 끝 까지의 바이트 수를 계산
    fseek(zip_file, 0, FILE_BEGIN);

    if (zip_file == 0)
    {
        MessageBoxA(NULL, "ERROR", "FILE IS NOT EXIST", MB_OK);
        return 0;
    }
    printf("[+] START EIP = 0x%02x\n", eip);
    while (feof(zip_file) == 0)
    {

        // refactoring
        //ulong signature;

        fread(&list, sizeof(list), 1, zip_file);
        //eip += sizeof(signature);

        // Check signature
        if (list.signature != 0x04034b50)
        {
            printf("Invalid signature: %#x\n", list.signature);
            break;
        }
        else
        {
            printf("SIGNATURE CATCHED!\n");
        }
        eip += DEFAULT_RECORD_SIZE;

        //exit(0);
        char* filename = (char*)malloc(list.filename_len + 1);
        fread(filename, 1, list.filename_len, zip_file);
        filename[list.filename_len] = '\0';
        char* extra = (char*)malloc(list.extra_len);
        char* data = (char*)malloc(list.compressed_size);

        printf("[X] CURRENT eip 0x%02x\n", eip);  // 딱 여기까지 파일 이름 

        // 디버거에서는 보이는데, 그냥 실행하면 왜 안보이는거지?
        if (strstr(filename, "document.xml"))
        {
            printf("PK offset ? %02x\n", eip - DEFAULT_RECORD_SIZE); // correct
            printf("GOOD\n");
            target_offset[START_OFFSET] = eip - DEFAULT_RECORD_SIZE;
            _flag = 1;
        }
        printf("[O] File name = %s\n", filename);
        printf("==============================\n");

        eip += list.filename_len;
        eip += list.extra_len;
        eip += list.compressed_size;
        eip += sizeof(list.signature); // patch

        if (_flag)
        {
            // document.xml만 얻게 되면, 굳이 다른거 볼 필요 없게 함 (첫번째 시나리오)
            target_offset[END_OFFSET] = eip - 1;
            printf("The document.xml file's END offset ? %02x\n", target_offset[END_OFFSET]); // 

            // File Create New (Temporariliy to test)
            FILE* new_fp = fopen("document.zip", "wb");
            fclose(zip_file);

            FILE* tmp = fopen("example_docx.zip", "r");
            unsigned char* buf;
            buf = (unsigned char*)malloc(target_offset[END_OFFSET] - target_offset[START_OFFSET]);
            fseek(tmp, target_offset[START_OFFSET], SEEK_SET); // 처음 기준부터 + target_offset[START_OFFSET] 까지 
            fread(buf, 1, target_offset[END_OFFSET] - target_offset[START_OFFSET], tmp);
            fwrite(buf, 1, target_offset[END_OFFSET] - target_offset[START_OFFSET], new_fp);

            exit(0); // test 
        }

        fseek(zip_file, eip, SEEK_SET);

        ZeroMemory(filename, list.filename_len + 1);
        ZeroMemory(extra, list.extra_len);
        ZeroMemory(data, list.compressed_size);

        free(filename);
        free(extra);
        free(data);

        puts("");
    }

    // 파일을 닫는다.
    fclose(zip_file);
    system("pause");
    return 0;
}