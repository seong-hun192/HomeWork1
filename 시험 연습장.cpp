#include <stdio.h>
#include <conio.h>
#include <windows.h>

// 커서 위치 이동 함수
void gotoxy(int x, int y) {
    COORD pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
    char c = 0;
    int success = 0;  // 입력 성공 여부

    while (success == 0) {
        // (2,2)에 input> 출력
        gotoxy(2, 2);
        printf("input> ");

        // 문자 입력
        c = _getch();

        // 숫자 ASCII 범위는 '0' = 48 ~ '9' = 57
        if (c >= '0') {
            if (c <= '9') {
                // 숫자일 경우 (9,2)에 출력하고 성공 처리
                gotoxy(9, 2);
                printf("%c", c);
                success = 1;
            }
        }

        if (success == 0) {
            // 숫자가 아니면 (2,3)에 오류 메시지 출력
            gotoxy(2, 3);
            printf("오류: 숫자만 입력하세요.");
        }
    }

    return 0;
}