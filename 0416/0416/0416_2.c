#include <stdio.h>

int sum_from_1_to_100() {
    int sum = 0;

    // 1부터 100까지 더하기
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }

    // 결과 출력
    printf("1부터 100까지의 합은 ");
    for (int i = 1; i <= 100; i++) {
        printf("%d", i);
        if (i < 100) {
            printf("+");
        }
        else {
            printf("=");
        }
    }
    printf("%d\n", sum);

    return sum;
}

int main() {
    int total = sum_from_1_to_100(); // 함수 호출하여 결과 받기
    printf("total=%d\n", total); // 결과 출력

    return 0;
}