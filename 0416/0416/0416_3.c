#include <stdio.h>

int convert_seconds(int sec) {
    if (sec >= 3600) {
        printf("����: 3600 �̻��� ���� �Է��߽��ϴ�.\n");
        return -1; // ������ ��Ÿ���� �� ��ȯ
    }

    int minutes = sec / 60; // �� ���
    int seconds = sec % 60; // �� ���

    printf("%d�� %d��\n", minutes, seconds);

    return seconds; // �� ���� ��ȯ
}

int main() {
    int seconds;

    // �� �Է� �ޱ�
    printf("�� ���� �Է��ϼ���: ");
    scanf("%d", &seconds);

    // �Լ� ȣ���Ͽ� ��� ���
    int result = convert_seconds(seconds);
    if (result != -1) {
        printf("��ȯ�� �� ��: %d\n", result);
    }

    return 0;
}