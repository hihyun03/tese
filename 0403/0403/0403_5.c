#include <stdio.h>
#include <stdbool.h>	// bool 타입 사용할 때 추가

int main() {
	// ! :: "~이 아니다."
// bool 자료형 :: 참(1)/거짓(0)(true/false) 값만 가정
// 비교연산자 :: < <=, >, >=, ==(같다), !=(다르다)
	bool tf = 1 == 2;		// tf = false
	printf("1==2 결과 :: %d\n", tf);
	printf("1<=5 결과 :: %d\n", (1 <= 5));
	printf("1!=10 결과 :: %d", (1 != 10));
}
