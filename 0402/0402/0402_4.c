#include <stdio.h>

int main() {
	// ���� ���� �� �� ���� -> "�ʱ�ȭ"
	// ���� �ʱ�ȭ :: [�ڷ���] [�����̸�]; / [�����̸�] = [��]; -> [�ڷ���] [�����̸�] = [��];
	int age = 22;

	double height = 163.1;

	char blood = 'A';

	// ������ ���� ����, ������ ���Ĵ�� ����ϱ�

	printf("�ȳ��Ͻʴϱ�, �������Դϴ�.\n");
	printf("����(age) : %d\n", age);
	printf("Ű(height) : %.1lf(cm)\n", height);
	printf("������(blood) : %c��\n", blood);
	printf("�� ��Ź�帳�ϴ�:)\n");
}
