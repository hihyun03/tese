#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	// 2���� ���ڸ� �Է¹ް�

	int a, b;
	scanf("%d %d", &a, &b);

	// 2�� ���� ���Ͽ� ����� ����϶�.
	// ������ �ٸ����� ���� ����� ����Ͽ���.

	// 1) bool Ÿ�� ������ ��/���� ���� �Ǻ� -> �̿� ���� ��� ���
	bool t = (a == b) ? true : false;
	(t == true) ? printf("�����ϴ�.") : printf("�ٸ��ϴ�.");

	// 2) ��� ���ǽ��� �����Ͽ� ��/���� ���� �Ǻ�
	(a == b) ? printf("�����ϴ�.") : printf("�ٸ��ϴ�.");
}
