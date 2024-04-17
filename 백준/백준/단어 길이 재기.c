#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char S[100];
	int count = 0;

	scanf("%s", S);

	for (int i = 0; S[i] != '\0'; i++) {
		count++;
	}

	printf("%d", count);
}