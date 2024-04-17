#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	/* 2개의 문자를 입력받고, 2개 값을 비교하여
	같은지 다른지에 대한 결과만 출력하라 */

	/*if (score >= 60) {	// Pass인 경우 (점수가 60 이상일 때)
	printf("Pass입니다.\n");

	else {	// Fail인 경우 (점수가 60 미만일 때)
		// 위 조건문을 만족하지 않다면
		printf("Fail입니다.\n");*/

	/*bool t = (a == b) ? true : false;
	(t == true) ? printf("같습니다.") : printf("다릅니다.");*/

	// 2개의 문자를 입력받고
	int a, b;
	scanf("%d %d", &a, &b);

	// 2개 값을 비교하여 같은지 다른지에 대한 결과만 출력하라
	if (a == b) {
		printf("같습니다.");
	}
	else {
		printf("다릅니다.");
	}
}
