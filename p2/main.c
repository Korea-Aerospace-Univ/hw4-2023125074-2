#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int lower_cnt = 0, digit_cnt = 0;
    int max_lower = 0, max_digit = 0;

    char ch;

    for (int i = 0; i < N; i++) {
        scanf(" %c", &ch);

        // 소문자
        if (ch >= 'a' && ch <= 'z') {
            lower_cnt++;
            digit_cnt = 0;
        }
        // 숫자
        else {
            digit_cnt++;
            lower_cnt = 0;
        }

        if (lower_cnt > max_lower)
            max_lower = lower_cnt;
        if (digit_cnt > max_digit)
            max_digit = digit_cnt;
    }

    printf("%d\n", max_lower);
    printf("%d\n", max_digit);

    return 0;
}
