#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int 동전;
	printf("동전을 넣어주세요. : ");
	scanf("%d", &동전);

	printf("\n(1) 콜라 (1000원)\n");
	printf("(2) 사이다 (1100원)\n");
	printf("(3) 포카리 스웨트 (1800원)\n");
	printf("(4) 레쓰비 (800원)\n");
	printf("(5) 카페라떼 (2500원)\n\n");

	int 음료;
	printf("음료를 골라주세요. : ");
	scanf("%d", &음료);

	int 가격;
	if (음료 == 1) {
		가격 = 1000;
		printf("\n콜라를 선택하셨습니다.");
	}
	else if (음료 == 2) {
		가격 = 1100;
		printf("\n사이다를 선택하셨습니다.");
	}
	else if (음료 == 3) {
		가격 = 1800;
		printf("\n포카리스웨트를 선택하셨습니다.");
		}
	else if (음료 == 4) {
		가격 = 800;
		printf("\n레쓰비를 선택하셨습니다.");
	}
	else if (음료 == 5) {
		가격 = 2500;
		printf("\n카페라떼를 선택하셨습니다.");
	}
	else {
		printf("\n잘못 된 번호를 선택하셨습니다.");
	}

	printf("\n\n가격은 %d원 입니다. \n\n \"%d원 받았습니다.\"", 가격, 동전);


	int 모자람;
	모자람 = 가격 - 동전;

	int 거스름돈;
	거스름돈 = 동전 - 가격;

	if (동전 == 가격) {
	printf("\n\n 잠시 후 음료가 나옵니다.\n");
	}
	else if (동전 < 가격) {
	printf("\n\n 금액이 %d원만큼 부족합니다.\n", 모자람);
	}
	else if (동전 > 가격) {
		printf("\n\n 잠시 후 음료가 나옵니다.\n\n거스름 돈은 %d 입니다. \n", 거스름돈);
	}
}