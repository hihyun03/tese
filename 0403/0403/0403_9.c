#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	/* 2���� ���ڸ� �Է¹ް�, 2�� ���� ���Ͽ�
	������ �ٸ����� ���� ����� ����϶� */

	/*if (score >= 60) {	// Pass�� ��� (������ 60 �̻��� ��)
	printf("Pass�Դϴ�.\n");

	else {	// Fail�� ��� (������ 60 �̸��� ��)
		// �� ���ǹ��� �������� �ʴٸ�
		printf("Fail�Դϴ�.\n");*/

	/*bool t = (a == b) ? true : false;
	(t == true) ? printf("�����ϴ�.") : printf("�ٸ��ϴ�.");*/

	// 2���� ���ڸ� �Է¹ް�
	int a, b;
	scanf("%d %d", &a, &b);

	// 2�� ���� ���Ͽ� ������ �ٸ����� ���� ����� ����϶�
	if (a == b) {
		printf("�����ϴ�.");
	}
	else {
		printf("�ٸ��ϴ�.");
	}
}
