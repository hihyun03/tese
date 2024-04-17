#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	// 2개의 숫자를 입력받고

	int a, b;
	scanf("%d %d", &a, &b);

	// 2개 값을 비교하여 결과를 출력하라.
	// 같은지 다른지에 대한 결과만 출력하여라.

	// 1) bool 타입 변수로 참/거짓 여부 판별 -> 이에 따라 결과 출력
	bool t = (a == b) ? true : false;
	(t == true) ? printf("같습니다.") : printf("다릅니다.");

	// 2) 즉시 조건식을 대입하여 참/거짓 여부 판별
	(a == b) ? printf("같습니다.") : printf("다릅니다.");
}
