// �����Ǿ� �ִ� if�� 5���� if - else if - else ������ �����ؼ� �ۼ����ּ���
// ����Ͽ��� �������ڴ� �����ֽñ� �ٶ��ϴ�.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// ���� :: ������ �Է¹ް�, �̿� �˸´� ������ ���Ͽ���.
	// (90~100 -> A / 80~89 -> B /
	//		70~79 -> C / 60~69 -> D / 0~59 -> F)
	int score;
	printf("������ �Է��ϼ���. (0~100�� ����) ");
	scanf("%d", &score);

	if (90 <= score) {		// ������ A�� ��� (90 <= score <= 100)
		// score�� 90 �̻��̰� 100 ������ ��
		if (score <= 100){
			printf("\nA�Դϴ�.");
		}
	}
	else if (80 <= score) {		// ������ B�� ��� (80 <= score <= 89)
		printf("\nB�Դϴ�.");
	}
	else if (70 <= score ) {		// ������ C�� ��� (70 <= score <= 79)
		printf("\nC�Դϴ�.");
	}
	else if (60 <= score) {		// ������ D�� ��� (60 <= score <= 69)
		printf("\nD�Դϴ�.");
	}
	else {		// ������ F�� ��� (0 <= score <= 59)
		if (0 <= score) {
			printf("\nF�Դϴ�.");
		}
	}
}