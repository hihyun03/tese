#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1. int�� �迭 arr[5]�� �����صΰ� 5���� ���ڸ� �Է¹޴´�.
// 2. ������ ���� ptArr�� �����Ѵ�.
// 3. ptArr�� ���Ͽ� arr�� ������ ����ϴ� ����� 2������ �ִ�.
//		-> 2������ ��� ����� ã�ƺ��ÿ�.

int main() {
    // 1. int�� �迭 arr[5]�� ����, 5���� ���� �Է�
    int arr[5];     // �迭 ��ȣ :: 0 ~ 4
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // 2. ������ ���� ptArr�� �����Ѵ�.
    int* ptArr;

    // 3. ptArr�� ���Ͽ�, arr�� ������ ����ϴ� ��� 2���� Ž��
    // printf("%d", arr);
    ptArr = arr;    // arr :: �ܵ����� ����, �迭�� ���� �ּ�
    for (int i = 0; i < 5; i++) {
        // 1) * ����ϴ� ���
        printf("%d ", *(ptArr + i));

        // 2) * ������� �ʴ� ���
        printf("%d\n", ptArr[i]);   // ptArr ���� ��� ��� = arr ���� ��� ��� 
    }
}