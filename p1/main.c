#include <stdio.h>

int main(void) {
    int ans = 0, n = 0, cnt = 0; // 초기화

    scanf("%d", &ans);// 정답 입력

    do{
        scanf("%d", &n);// 인풋 입력

        if(n > ans) // n이 정답보다 크면
            printf("%d>?\n",n);
        else if(n < ans)// n이 정답보다 작으면
            printf("%d<?\n",n);
        else            // n과 정답이 같으면
            printf("%d==?\n",n);
        cnt++;// 카운트 해주기
    }while(ans != n);

    printf("%d", cnt);
    return 0;
}
