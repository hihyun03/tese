#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B
	// 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를
	// 출력하는 프로그램을 작성하시오.

	int score;
	scanf("%d", &score);

	if (90 <= score) {		// 학점이 A인 경우 (90 <= score <= 100)
		// score값 90 이상이고 100 이하일 때
		if (score <= 100) {
			printf("A");
		}
	}
	else if (80 <= score) {		// 학점이 B인 경우 (80 <= score <= 89)
		printf("B");
	}
	else if (70 <= score) {		// 학점이 C인 경우 (70 <= score <= 79)
		printf("C");
	}
	else if (60 <= score) {		// 학점이 D인 경우 (60 <= score <= 69)
		printf("D");
	}
	else {		// 학점이 F인 경우 (0 <= score <= 59)
		if (0 <= score) {
			printf("F");
		}
	}
}