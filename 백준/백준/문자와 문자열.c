#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	// ���ڿ� :: ���� ���� ���� -> �迭 �н��� �ʿ�
	// "���α׷��� ��ü������ �����ϴ� ���ڿ��� ��('WO')�� �Է°���
	//		�浹�� �Ͼ�� �ʰԲ� ������ �˳��� �����ϱ�"
	char S[1000];
	int i;

	scanf("%s %d", S, &i);

	printf("%c \n", S[i - 1]);
}