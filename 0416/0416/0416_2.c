#include <stdio.h>

int sum_from_1_to_100() {
    int sum = 0;

    // 1���� 100���� ���ϱ�
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }

    // ��� ���
    printf("1���� 100������ ���� ");
    for (int i = 1; i <= 100; i++) {
        printf("%d", i);
        if (i < 100) {
            printf("+");
        }
        else {
            printf("=");
        }
    }
    printf("%d\n", sum);

    return sum;
}

int main() {
    int total = sum_from_1_to_100(); // �Լ� ȣ���Ͽ� ��� �ޱ�
    printf("total=%d\n", total); // ��� ���

    return 0;
}