#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 1. 2�� ������ �Է� �ޱ�
	int a, b;
	scanf("%d %d", &a, &b);
	
	// 2. 2�� �� �� -> �� ����� ���� ��� ���
	//		a�� b���� ū�� ���� ��, a�� b�� ������
	if (a > b) {		// a�� b���� ū ���
		printf(">\n");
	}
	else if (a < b) {	// a�� b���� ���� ���
		printf("<\n");
	}
	else {				// a�� b�� ���� ���
		printf("==\n");
	}
}