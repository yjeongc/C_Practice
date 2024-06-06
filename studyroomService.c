#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_RESERVATIONS 12  // �ִ� ���� ���� ����
#define ROWS 4               // Ÿ�����̺��� �� �� (�ð���)
#define COLUMNS 3            // Ÿ�����̺��� �� �� (�� ũ��)

// ���� ������ ��� ����ü
typedef struct Reserve_info {
    int stu_number;          // �л� ��ȣ
    char stu_name[50];       // �л� �̸�
    int room_size;           // �� ũ��
    char reserve_time[50];   // ���� �ð���
} reserve_info;

reserve_info Reservation[MAX_RESERVATIONS];  // ���� ������ �����ϴ� ����ü �迭

// �Լ� ���� �κ�.
void addReservation(int TimeTable[ROWS][COLUMNS], int *reservationCount);
char findAbleTime(int TimeTable[ROWS][COLUMNS], int roomsize);
int Choice_first();
int Choice_roomsize();
void findReservation(reserve_info Reservation[MAX_RESERVATIONS], int reservationCount);


// ������ �߰��ϴ� �Լ�
void addReservation(int TimeTable[ROWS][COLUMNS], int *reservationCount) {
    if (*reservationCount >= MAX_RESERVATIONS) {
        printf("������ ���� á���ϴ�. �� �̻� ������ �� �����ϴ�.\n");
        return;
    }

    reserve_info newReservation; // ���ο� ���� ����ü ����
    int roomsize = (Choice_roomsize() + 1) * 2; // ����ڰ� �� ũ�⸦ �����ϴ� �Լ�
    newReservation.room_size = roomsize; //�� ũ�⸦ ���ο� ���� ����ü�� ����.
    char time = findAbleTime(TimeTable, roomsize); // ���� ������ �ð��븦 ã�� ����ڰ� ���� ������ �ð��븦 �����ϴ� �Լ�
    snprintf(newReservation.reserve_time, sizeof(newReservation.reserve_time), "%c", time); // �ð��븦 ���ڿ��� ��ȯ�Ͽ� ���ο� ���� ����ü�� ����.

    //�ð��븦 ���ڷ� ��ȯ��. �ð���� A,B,C,D ���·� ������ ������ 0~3������ ���ڷ� ��ȯ�ϴ� ������ �ʿ���.
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
            printf("�߸��� �ð��� �Է��Դϴ�.\n"); //����ó��
            return;
    }

    //�й��� �Է¹޾� ����ü�� ������.
    int num = 0;
    printf("�й��� �Է��ϼ���:");
    scanf("%d", &num);
    newReservation.stu_number = num;

    //�̸��� �Է¹޾� ����ü�� ������.
    char name[50];
    printf("�̸��� �Է��ϼ���:");
    scanf("%s", name);
    snprintf(newReservation.stu_name, sizeof(newReservation.stu_name), "%s", name);

    // Ÿ�����̺� ���� ǥ�� (0 -> 1)
    TimeTable[time_idx][roomsize / 2 - 1] = 1;

    // ���ο� ����ü�� ����ü �迭�� �߰���.
    Reservation[*reservationCount] = newReservation;
    (*reservationCount)++;

    printf("������ �Ϸ�Ǿ����ϴ�. ó������ ���ư��ϴ�.\n");
}


// ���� ������ �ð��븦 ã�� �Լ�
char findAbleTime(int TimeTable[ROWS][COLUMNS], int roomsize) {
    printf("�̿� ������ �ð���� ");
    int count = 0;
    char availableTimes[ROWS] = {0}; // ���� ������ �ð��븦 ������ �迭
    char timeChoices; //������� ������ ���� ����

    // ���� ������ �ð��� ã�� �κ�. ���� ���� �ð��� ����ϰ� �迭�� ����
    for (int i = 0; i < ROWS; i++) {
        if (TimeTable[i][roomsize / 2 - 1] == 0) {
            switch (i) {
                case 0:
                    printf("A(9�� ~ 11��) ");
                    availableTimes[count++] = 'A';
                    break;
                case 1:
                    printf("B(11�� ~ 13��) ");
                    availableTimes[count++] = 'B';
                    break;
                case 2:
                    printf("C(13�� ~ 15��) ");
                    availableTimes[count++] = 'C';
                    break;
                case 3:
                    printf("D(15�� ~ 17��) ");
                    availableTimes[count++] = 'D';
                    break;
            }
        }
    }
    printf("�Դϴ�. �� %d �� �̿밡���մϴ�.\n", count);

    if (count == 0) {
        printf("���� ������ �ð��밡 �����ϴ�. ������ ���񽺸� �̿����ּ���.\n"); //����ó��
        return 0;
    } else {
        int isValidTime = 0; // ��ȿ�� �ð��� �ԷµǾ����� Ȯ���ϴ� ����

        // ����ڰ� ��ȿ�� �ð��� �Է��� ������ �ݺ�
        while (!isValidTime) {
            printf("������ �ð���(A, B, C, D)�� �Է��ϼ���.\n");
            scanf(" %c", &timeChoices);
            timeChoices = toupper(timeChoices); // �ҹ��ڸ� �빮�ڷ� ��ȯ

            // ����ڰ� �Է��� �ð��� ��ȿ���� Ȯ��
            for (int i = 0; i < count; i++) {
                if (timeChoices == availableTimes[i]) {
                    isValidTime = 1;
                    break;
                }
            }
            if (!isValidTime) {
                printf("�߸��� �Է��Դϴ�. �̿� ������ �ð���� ");
                for (int i = 0; i < count; i++) {
                    printf("%c ", availableTimes[i]);
                }
                printf("�Դϴ�. �� �߿��� �������ּ���.\n");
            }
        }
        return timeChoices;
    }
}


// ����ڰ� ù �ɼ��� ���� �Լ�
int Choice_first() {
    int choice;
    int validInput = 0;
    
    while (!validInput) {
        printf("-------------------------------------------------------------------------\n");
        printf("1, 2, 3 �߿��� ���ϴ� ������ ��ȣ�� �Է��ϼ���. (���α׷��� �����Ϸ��� 3�� �Է��ϼ���.)\n");
        printf("���͵�� ���� �ϱ� : 1 / ���� ���� ��ȸ�ϱ� : 2 / ������ : 3\n");
        
        if (scanf("%d", &choice) == 1) {
            if (choice == 1 || choice == 2 || choice == 3) {
                validInput = 1;
            } else {
                printf("�߸��� �Է��Դϴ�. 1, 2, 3 �߿��� �������ּ���.\n");
            }
        } else {
            printf("�߸��� �Է��Դϴ�. 1~3 ���ڸ� �Է����ּ���.\n");
            while (getchar() != '\n'); // �Է� ���۸� ���
        }
    }
    
    return choice;
}


// ����ڰ� �� �ν��� ������� �����ϴ� �Լ�
int Choice_roomsize() {
    int choice;
    int validInput = 0;
    
    while (!validInput) {
        printf("-------------------------------------------------------------------------\n");
        printf("2�ν�, 4�ν�, 6�ν� �߿��� ���ϴ� ������ ��ȣ�� �Է��ϼ���.\n");
        printf("2�ν� : 1 / 4�ν� : 2 / 6�ν� : 3\n");
        
        if (scanf("%d", &choice) == 1) {
            if (choice == 1 || choice == 2 || choice == 3) {
                validInput = 1;
            } else {
                printf("�ٽ� �Է��ϼ���. 1, 2, 3 �߿��� �������ּ���.\n"); //����ó��
            }
        } else {
            printf("�߸��� �Է��Դϴ�. ���ڸ� �Է����ּ���.\n");
            while (getchar() != '\n'); // �Է� ���۸� ���
        }
    }
    printf("-------------------------------------------------------------------------\n");

    return choice - 1;
}


// ������� ���� ������ ã�� �Լ�
void findReservation(reserve_info Reservation[MAX_RESERVATIONS], int reservationCount) {
    int stu_number;
    printf("-------------------------------------------------------------------------\n");
    printf("������ �й��� �Է��ϼ���: ");
    scanf("%d", &stu_number);
    printf("-------------------------------------------------------------------------\n");

    int found = 0;
    for (int i = 0; i < reservationCount; i++) {
        if (Reservation[i].stu_number == stu_number) {
            printf("�й�: %d\n", Reservation[i].stu_number);
            printf("�̸�: %s\n", Reservation[i].stu_name);
            printf("�� ũ��: %d�ν�\n", Reservation[i].room_size);
            printf("���� �ð���: %s\n", Reservation[i].reserve_time);
            found = 1;
        }
    }

    if (!found) {
        printf("�ش� �й��� ���� ������ �����ϴ�.\n");
    }
}


// ���� �Լ�
int main() {
    int TimeTable[ROWS][COLUMNS] = {0}; // Ÿ�����̺��� ����� 0���� �ʱ�ȭ
    int reservationCount = 0; // ���� ī��Ʈ

    while (1) {
        int C = Choice_first(); // ù �ɼ� ����

        switch (C) {
            case 1:
                addReservation(TimeTable, &reservationCount); // ���� �Լ� ȣ��
                break;
            case 2:
                findReservation(Reservation, reservationCount); // ���� ���� ã�� �Լ� ȣ��
                break;
            case 3:
                printf("���α׷��� �����մϴ�.\n");
                return 0;
            default:
                printf("�߸��� �Է��Դϴ�. �ٽ� �õ��ϼ���.\n");
                break;
        }
    }
    return 0;
}
