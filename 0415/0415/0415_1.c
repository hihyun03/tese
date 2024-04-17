#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 출력과 입력 :: printf(), scanf()
	// 문자, 문자열 입력 :: getchar(char), gets(char[])		-> 설명X

	// %c 쪽에 공백값('\0')이나 줄바꿈값('\n')이 들어가는 경우 발생

	int num;
	char ch, c;
	scanf("%d %c", &num, &ch);
	rewind(stdin);
	scanf("%c", &c)
	printf("%d %c %c", num, ch, c);
}
