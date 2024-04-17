#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 1. 2개 정수값 입력 받기
	int a, b;
	scanf("%d %d", &a, &b);
	
	// 2. 2개 값 비교 -> 비교 결과에 따라 결과 출력
	//		a가 b보다 큰지 작은 지, a와 b가 같은지
	if (a > b) {		// a가 b보다 큰 경우
		printf(">\n");
	}
	else if (a < b) {	// a가 b보다 작은 경우
		printf("<\n");
	}
	else {				// a가 b와 같은 경우
		printf("==\n");
	}
}