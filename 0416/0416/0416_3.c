#include <stdio.h>

int convert_seconds(int sec) {
    if (sec >= 3600) {
        printf("오류: 3600 이상의 값을 입력했습니다.\n");
        return -1; // 오류를 나타내는 값 반환
    }

    int minutes = sec / 60; // 분 계산
    int seconds = sec % 60; // 초 계산

    printf("%d분 %d초\n", minutes, seconds);

    return seconds; // 초 값을 반환
}

int main() {
    int seconds;

    // 초 입력 받기
    printf("초 값을 입력하세요: ");
    scanf("%d", &seconds);

    // 함수 호출하여 결과 출력
    int result = convert_seconds(seconds);
    if (result != -1) {
        printf("반환된 초 값: %d\n", result);
    }

    return 0;
}