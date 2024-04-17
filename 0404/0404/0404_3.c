#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 논리연산자 :: &,  && / |,  || / !
	
	// 예제 :: 점수를 입력받고, 이에 알맞는 학점을 구하여라.
	// (90~100 -> A / 80~89 -> B /
	//		70~79 -> C / 60~69 -> D / 0~59 -> F)

	// 1. 점수를 입력받기
	int score;
	printf("점수를 입력하세요. (0~100점 범위) ");
	scanf("%d", &score);

	// 2. 입력값이 속하는 범위의 결과값 출력
	// &, && :: "그리고"
	//		2개의 조건식 중 하나라도 거짓이면 False 결과가 나타남
	//		&는 2개의 조건식을 모두 판별
	//		&&는 첫번째 식의 결과값에 따라 두번째 식을 볼 수도 있고 안 볼 수도 있음
	if (90 <= score && score <= 100) {		// 학점이 A인 경우 (90 <= score <= 100)
		// score값 90 이상이고 100 이하일 때
		printf("\nA입니다.");
	}
	if (80 <= score && score < 90) {		// 학점이 B인 경우 (80 <= score <= 89)
		printf("\nB입니다.");
	}
	if (70 <= score && score < 80) {		// 학점이 C인 경우 (70 <= score <= 79)
		printf("\nC입니다.");
	}
	if (60 <= score && score < 70) {		// 학점이 D인 경우 (60 <= score <= 69)
		printf("\nD입니다.");
	}
	if (0 <= score && score < 60) {		// 학점이 F인 경우 (0 <= score <= 59)
		printf("\nF입니다.");
	}
}
