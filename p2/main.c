#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);// N으로 입력하기

    // 변수 선언 및 초기화
    int lower_cnt = 0, digit_cnt = 0;
    int max_lower = 0, max_digit = 0;

    char ch;
    // 0 부터 N-1까지 도는 반복문
    for (int i = 0; i < N; i++) {
        // 문자 ch 입력
        scanf(" %c", &ch);

        // 소문자일 때
        if (ch >= 'a' && ch <= 'z') {
            lower_cnt++;// 소문자 수 증가
            digit_cnt = 0;// 숫자 cnt 0으로 초기화
        }
        // 숫자
        else {
            digit_cnt++;// 숫자 수 증가
            lower_cnt = 0;// 소문자 cnt 0으로 초기화
        }

        //최댓값 계산하기
        if (lower_cnt > max_lower)
            max_lower = lower_cnt;
        if (digit_cnt > max_digit)
            max_digit = digit_cnt;
    }

    printf("%d\n", max_lower);
    printf("%d\n", max_digit);

    return 0;
}
