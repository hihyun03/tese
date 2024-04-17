#include <stdio.h>
#include <stdbool.h>

int main() {
	// 삼항연산자 :: ?
	// (조건식) ? (참일 때 수행할 명령문) : (거짓일 때 수행할 명령문)
	bool t = (1 == 1) ? true : false;		//true값 저장
		// 1과 1이 같다면, t에 true를 저장하라.
		// 아니라면, false를 저장하라.
	(1 == 1) ? printf("참입니다.") : printf("거짓입니다.");
}
