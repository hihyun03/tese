#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* (A+B)%C�� ((A%C) + (B%C))%C �� ������?
		(A��B)%C�� ((A%C) �� (B%C))%C �� ������?
		�� �� A, B, C�� �־����� ��, ���� �� ���� ����
		���ϴ� ���α׷��� �ۼ��Ͻÿ�. */

	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);

	printf("%d\n", (A + B) % C);
	printf("%d\n", ((A % C) + (B % C)) % C);
	printf("%d\n", (A * B) % C);
	printf("%d\n", ((A % C) *(B % C)) % C);
}