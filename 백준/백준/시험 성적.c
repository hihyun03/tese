#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// ���� ������ �Է¹޾� 90 ~ 100���� A, 80 ~ 89���� B
	// 70 ~ 79���� C, 60 ~ 69���� D, ������ ������ F��
	// ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

	int score;
	scanf("%d", &score);

	if (90 <= score) {		// ������ A�� ��� (90 <= score <= 100)
		// score�� 90 �̻��̰� 100 ������ ��
		if (score <= 100) {
			printf("A");
		}
	}
	else if (80 <= score) {		// ������ B�� ��� (80 <= score <= 89)
		printf("B");
	}
	else if (70 <= score) {		// ������ C�� ��� (70 <= score <= 79)
		printf("C");
	}
	else if (60 <= score) {		// ������ D�� ��� (60 <= score <= 69)
		printf("D");
	}
	else {		// ������ F�� ��� (0 <= score <= 59)
		if (0 <= score) {
			printf("F");
		}
	}
}