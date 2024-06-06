#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_RESERVATIONS 12
#define ROWS 4
#define COLUMNS 3

typedef struct Reserve_info {
    int stu_number;
    char stu_name[50];
    int room_size;
    char reserve_time[50];
} reserve_info;

reserve_info Reservation[MAX_RESERVATIONS];

// 함수 선언
void addReservation(int TimeTable[ROWS][COLUMNS], int *reservationCount);
char findAbleTime(int TimeTable[ROWS][COLUMNS], int roomsize);
int Choice_first();
int Choice_roomsize();
void findReservation(reserve_info Reservation[MAX_RESERVATIONS], int reservationCount);

// 예약 함수
void addReservation(int TimeTable[ROWS][COLUMNS], int *reservationCount) {
    if (*reservationCount >= MAX_RESERVATIONS) {
        printf("예약이 가득 찼습니다. 더 이상 예약할 수 없습니다.\n");
        return;
    }

    reserve_info newReservation; // 새로운 구조체 생성
    int roomsize = (Choice_roomsize() + 1) * 2; // 몇 인실인지 선택하는 함수. 인실의 인덱스를 반환한다. 2인실 : 1, 4인실 : 2, 6인실 : 3
    newReservation.room_size = roomsize;
    char time = findAbleTime(TimeTable, roomsize); // 예약이 가능한 시간대를 찾고 선택하는 함수. A, B, C 중에서 하나를 반환함.
    snprintf(newReservation.reserve_time, sizeof(newReservation.reserve_time), "%c", time); // 문자열로 변환

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
            printf("잘못된 시간대 입력입니다.\n");
            return;
    }

    int num = 0;
    printf("학번을 입력하세요:");
    scanf("%d", &num);
    newReservation.stu_number = num;

    char name[50];
    printf("이름을 입력하세요:");
    scanf("%s", name);
    snprintf(newReservation.stu_name, sizeof(newReservation.stu_name), "%s", name);

    TimeTable[time_idx][roomsize / 2 - 1] = 1;

    Reservation[*reservationCount] = newReservation;
    (*reservationCount)++;

    printf("예약이 완료되었습니다. 처음으로 돌아갑니다.\n");
}

// 예약이 가능한 시간대를 찾는 함수
char findAbleTime(int TimeTable[ROWS][COLUMNS], int roomsize) {
    printf("이용 가능한 시간대는 ");
    int count = 0;
    char availableTimes[ROWS] = {0}; // 예약 가능한 시간대를 저장할 배열
    char timeChoices;

    // 예약 가능한 시간대를 출력하고 배열에 저장
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
        printf("예약 가능한 시간대가 없습니다. 다음에 서비스를 이용해주세요.\n");
        return 0;
    } else {
        int isValidTime = 0; // 유효한 시간이 입력되었는지 확인하는 변수

        // 유효한 시간이 입력될 때까지 반복
        while (!isValidTime) {
            printf("예약할 시간대(A, B, C, D)를 입력하세요.\n");
            scanf(" %c", &timeChoices);
            timeChoices = toupper(timeChoices); // 소문자를 대문자로 변환

            // 입력한 시간이 유효한지 확인
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

// 사용자가 몇 인실을 사용할지 고르는 함수
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
                printf("다시 입력하세요. 1, 2, 3 중에서 선택해주세요.\n");
            }
        } else {
            printf("잘못된 입력입니다. 숫자를 입력해주세요.\n");
            while (getchar() != '\n'); // 입력 버퍼를 비움
        }
    }
    printf("-------------------------------------------------------------------------\n");

    return choice - 1;
}

// 예약 내역 찾는 함수
void findReservation(reserve_info Reservation[MAX_RESERVATIONS], int reservationCount) {
    int stu_number;
    printf("-------------------------------------------------------------------------\n");
    printf("찾으려는 학번을 입력하세요: ");
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

int main() {
    int TimeTable[ROWS][COLUMNS] = {0}; // 타임테이블을 만들고 0으로 초기화
    int reservationCount = 0; // 예약 카운트

    while (1) {
        int C = Choice_first();

        switch (C) {
            case 1:
                addReservation(TimeTable, &reservationCount); // 예약 함수
                break;
            case 2:
                findReservation(Reservation, reservationCount); // 예약 내역 찾는 함수
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
