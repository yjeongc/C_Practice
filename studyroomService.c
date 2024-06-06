#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_RESERVATIONS 12  // 최대 예약 가능 개수
#define ROWS 4               // 타임테이블의 행 수 (시간대)
#define COLUMNS 3            // 타임테이블의 열 수 (방 크기)

// 예약 정보를 담는 구조체
typedef struct Reserve_info {
    int stu_number;          // 학생 번호
    char stu_name[50];       // 학생 이름
    int room_size;           // 방 크기
    char reserve_time[50];   // 예약 시간대
} reserve_info;

reserve_info Reservation[MAX_RESERVATIONS];  // 예약 정보를 저장하는 구조체 배열

// 함수 선언 부분.
void addReservation(int TimeTable[ROWS][COLUMNS], int *reservationCount);
char findAbleTime(int TimeTable[ROWS][COLUMNS], int roomsize);
int Choice_first();
int Choice_roomsize();
void findReservation(reserve_info Reservation[MAX_RESERVATIONS], int reservationCount);


// 예약을 추가하는 함수
void addReservation(int TimeTable[ROWS][COLUMNS], int *reservationCount) {
    if (*reservationCount >= MAX_RESERVATIONS) {
        printf("예약이 가득 찼습니다. 더 이상 예약할 수 없습니다.\n");
        return;
    }

    reserve_info newReservation; // 새로운 예약 구조체 생성
    int roomsize = (Choice_roomsize() + 1) * 2; // 사용자가 방 크기를 선택하는 함수
    newReservation.room_size = roomsize; //방 크기를 새로운 예약 구조체에 담음.
    char time = findAbleTime(TimeTable, roomsize); // 예약 가능한 시간대를 찾고 사용자가 예약 가능한 시간대를 선택하는 함수
    snprintf(newReservation.reserve_time, sizeof(newReservation.reserve_time), "%c", time); // 시간대를 문자열로 변환하여 새로운 예약 구조체에 담음.

    //시간대를 숫자로 변환함. 시간대는 A,B,C,D 형태로 들어오기 때문에 0~3형태의 숫자로 변환하는 과정이 필요함.
    int time_idx = 0;
    switch (time) {
        case 'A':
            time_idx = 0;
            break;
        case 'B':
            time_idx = 1;
            break;
        case 'C':
            time_idx = 2;
            break;
        case 'D':
            time_idx = 3;
            break;
        default:
            printf("잘못된 시간대 입력입니다.\n"); //예외처리
            return;
    }

    //학번을 입력받아 구조체에 저장함.
    int num = 0;
    printf("학번을 입력하세요:");
    scanf("%d", &num);
    newReservation.stu_number = num;

    //이름을 입력받아 구조체에 저장함.
    char name[50];
    printf("이름을 입력하세요:");
    scanf("%s", name);
    snprintf(newReservation.stu_name, sizeof(newReservation.stu_name), "%s", name);

    // 타임테이블에 예약 표시 (0 -> 1)
    TimeTable[time_idx][roomsize / 2 - 1] = 1;

    // 새로운 구조체를 구조체 배열에 추가함.
    Reservation[*reservationCount] = newReservation;
    (*reservationCount)++;

    printf("예약이 완료되었습니다. 처음으로 돌아갑니다.\n");
}


// 예약 가능한 시간대를 찾는 함수
char findAbleTime(int TimeTable[ROWS][COLUMNS], int roomsize) {
    printf("이용 가능한 시간대는 ");
    int count = 0;
    char availableTimes[ROWS] = {0}; // 예약 가능한 시간대를 저장할 배열
    char timeChoices; //사용자의 선택을 담을 변수

    // 예약 가능한 시간대 찾는 부분. 예약 가능 시간을 출력하고 배열에 저장
    for (int i = 0; i < ROWS; i++) {
        if (TimeTable[i][roomsize / 2 - 1] == 0) {
            switch (i) {
                case 0:
                    printf("A(9시 ~ 11시) ");
                    availableTimes[count++] = 'A';
                    break;
                case 1:
                    printf("B(11시 ~ 13시) ");
                    availableTimes[count++] = 'B';
                    break;
                case 2:
                    printf("C(13시 ~ 15시) ");
                    availableTimes[count++] = 'C';
                    break;
                case 3:
                    printf("D(15시 ~ 17시) ");
                    availableTimes[count++] = 'D';
                    break;
            }
        }
    }
    printf("입니다. 총 %d 개 이용가능합니다.\n", count);

    if (count == 0) {
        printf("예약 가능한 시간대가 없습니다. 다음에 서비스를 이용해주세요.\n"); //예외처리
        return 0;
    } else {
        int isValidTime = 0; // 유효한 시간이 입력되었는지 확인하는 변수

        // 사용자가 유효한 시간을 입력할 때까지 반복
        while (!isValidTime) {
            printf("예약할 시간대(A, B, C, D)를 입력하세요.\n");
            scanf(" %c", &timeChoices);
            timeChoices = toupper(timeChoices); // 소문자를 대문자로 변환

            // 사용자가 입력한 시간이 유효한지 확인
            for (int i = 0; i < count; i++) {
                if (timeChoices == availableTimes[i]) {
                    isValidTime = 1;
                    break;
                }
            }
            if (!isValidTime) {
                printf("잘못된 입력입니다. 이용 가능한 시간대는 ");
                for (int i = 0; i < count; i++) {
                    printf("%c ", availableTimes[i]);
                }
                printf("입니다. 이 중에서 선택해주세요.\n");
            }
        }
        return timeChoices;
    }
}


// 사용자가 첫 옵션을 고르는 함수
int Choice_first() {
    int choice;
    int validInput = 0;
    
    while (!validInput) {
        printf("-------------------------------------------------------------------------\n");
        printf("1, 2, 3 중에서 원하는 서비스의 번호를 입력하세요. (프로그램을 종료하려면 3을 입력하세요.)\n");
        printf("스터디룸 예약 하기 : 1 / 예약 내역 조회하기 : 2 / 끝내기 : 3\n");
        
        if (scanf("%d", &choice) == 1) {
            if (choice == 1 || choice == 2 || choice == 3) {
                validInput = 1;
            } else {
                printf("잘못된 입력입니다. 1, 2, 3 중에서 선택해주세요.\n");
            }
        } else {
            printf("잘못된 입력입니다. 1~3 숫자를 입력해주세요.\n");
            while (getchar() != '\n'); // 입력 버퍼를 비움
        }
    }
    
    return choice;
}


// 사용자가 몇 인실을 사용할지 선택하는 함수
int Choice_roomsize() {
    int choice;
    int validInput = 0;
    
    while (!validInput) {
        printf("-------------------------------------------------------------------------\n");
        printf("2인실, 4인실, 6인실 중에서 원하는 서비스의 번호를 입력하세요.\n");
        printf("2인실 : 1 / 4인실 : 2 / 6인실 : 3\n");
        
        if (scanf("%d", &choice) == 1) {
            if (choice == 1 || choice == 2 || choice == 3) {
                validInput = 1;
            } else {
                printf("다시 입력하세요. 1, 2, 3 중에서 선택해주세요.\n"); //예외처리
            }
        } else {
            printf("잘못된 입력입니다. 숫자를 입력해주세요.\n");
            while (getchar() != '\n'); // 입력 버퍼를 비움
        }
    }
    printf("-------------------------------------------------------------------------\n");

    return choice - 1;
}


// 사용자의 예약 내역을 찾는 함수
void findReservation(reserve_info Reservation[MAX_RESERVATIONS], int reservationCount) {
    int stu_number;
    printf("-------------------------------------------------------------------------\n");
    printf("예약한 학번을 입력하세요: ");
    scanf("%d", &stu_number);
    printf("-------------------------------------------------------------------------\n");

    int found = 0;
    for (int i = 0; i < reservationCount; i++) {
        if (Reservation[i].stu_number == stu_number) {
            printf("학번: %d\n", Reservation[i].stu_number);
            printf("이름: %s\n", Reservation[i].stu_name);
            printf("방 크기: %d인실\n", Reservation[i].room_size);
            printf("예약 시간대: %s\n", Reservation[i].reserve_time);
            found = 1;
        }
    }

    if (!found) {
        printf("해당 학번의 예약 내역이 없습니다.\n");
    }
}


// 메인 함수
int main() {
    int TimeTable[ROWS][COLUMNS] = {0}; // 타임테이블을 만들고 0으로 초기화
    int reservationCount = 0; // 예약 카운트

    while (1) {
        int C = Choice_first(); // 첫 옵션 선택

        switch (C) {
            case 1:
                addReservation(TimeTable, &reservationCount); // 예약 함수 호출
                break;
            case 2:
                findReservation(Reservation, reservationCount); // 예약 내역 찾는 함수 호출
                break;
            case 3:
                printf("프로그램을 종료합니다.\n");
                return 0;
            default:
                printf("잘못된 입력입니다. 다시 시도하세요.\n");
                break;
        }
    }
    return 0;
}
