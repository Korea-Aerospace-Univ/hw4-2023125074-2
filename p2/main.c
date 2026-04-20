#include <stdio.h>

int main(void) {
    int n = 0, cnt_lower = 0, cnt_digit = 0, max_lower = 0, max_digit = 0;
    
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        char c;
        scanf("%c", &c);

        if('a' <= c && c <= 'z'){// 소문자일 때
            cnt_lower++;
            cnt_digit = 0;
        }
        else{// 숫자일 때
            cnt_lower = 0;
            cnt_digit++;
        }

        if(max_lower < cnt_lower)// 비교해서 문자 최댓값
            max_lower = cnt_lower;
        if(max_digit < cnt_digit)// 비교해서 숫자 최댓값
            max_digit = cnt_digit;
    }

    printf("%d\n%d", max_lower, max_digit);
    return 0;
}
