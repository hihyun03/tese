#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1. int형 배열 arr[5]를 선언해두고 5개의 숫자를 입력받는다.
// 2. 포인터 변수 ptArr를 선언한다.
// 3. ptArr를 통하여 arr의 값들을 출력하는 방법이 2가지가 있다.
//		-> 2가지의 출력 방법을 찾아보시오.

int main() {
    // 1. int형 배열 arr[5]를 선언, 5개의 숫자 입력
    int arr[5];     // 배열 번호 :: 0 ~ 4
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // 2. 포인터 변수 ptArr를 선언한다.
    int* ptArr;

    // 3. ptArr를 통하여, arr의 값들을 출력하는 방법 2가지 탐색
    // printf("%d", arr);
    ptArr = arr;    // arr :: 단독으로 쓰면, 배열의 시작 주소
    for (int i = 0; i < 5; i++) {
        // 1) * 사용하는 경우
        printf("%d ", *(ptArr + i));

        // 2) * 사용하지 않는 경우
        printf("%d\n", ptArr[i]);   // ptArr 단톡 사용 결과 = arr 단톡 사용 결과 
    }
}