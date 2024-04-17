#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	int units, tens, hundreds;

	scanf("%d %d", &a, &b);

	units = a * (b % 10);
	tens = a * ((b / 10) % 10);
	hundreds = a * (b / 100);

	printf("%d\n", units);
	printf("%d\n", tens);
	printf("%d\n", hundreds);
	printf("%d\n", units + (tens * 10) + (hundreds * 100));
}