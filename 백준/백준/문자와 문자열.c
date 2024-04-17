#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	// 문자열 :: 여러 개의 문자 -> 배열 학습이 필요
	// "프로그램이 자체적으로 삽입하는 문자열의 끝('WO')과 입력값이
	//		충돌이 일어나지 않게끔 공간을 넉넉히 설정하기"
	char S[1000];
	int i;

	scanf("%s %d", S, &i);

	printf("%c \n", S[i - 1]);
}