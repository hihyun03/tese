// 나열되어 있는 if문 5개를 if - else if - else 형으로 변형해서 작성해주세요
// 사용하였던 논리연산자는 지워주시길 바랍니다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 예제 :: 점수를 입력받고, 이에 알맞는 학점을 구하여라.
	// (90~100 -> A / 80~89 -> B /
	//		70~79 -> C / 60~69 -> D / 0~59 -> F)
	int score;
	printf("점수를 입력하세요. (0~100점 범위) ");
	scanf("%d", &score);

	if (90 <= score) {		// 학점이 A인 경우 (90 <= score <= 100)
		// score값 90 이상이고 100 이하일 때
		if (score <= 100){
			printf("\nA입니다.");
		}
	}
	else if (80 <= score) {		// 학점이 B인 경우 (80 <= score <= 89)
		printf("\nB입니다.");
	}
	else if (70 <= score ) {		// 학점이 C인 경우 (70 <= score <= 79)
		printf("\nC입니다.");
	}
	else if (60 <= score) {		// 학점이 D인 경우 (60 <= score <= 69)
		printf("\nD입니다.");
	}
	else {		// 학점이 F인 경우 (0 <= score <= 59)
		if (0 <= score) {
			printf("\nF입니다.");
		}
	}
}