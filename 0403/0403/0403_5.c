#include <stdio.h>
#include <stdbool.h>	// bool Ÿ�� ����� �� �߰�

int main() {
	// ! :: "~�� �ƴϴ�."
// bool �ڷ��� :: ��(1)/����(0)(true/false) ���� ����
// �񱳿����� :: < <=, >, >=, ==(����), !=(�ٸ���)
	bool tf = 1 == 2;		// tf = false
	printf("1==2 ��� :: %d\n", tf);
	printf("1<=5 ��� :: %d\n", (1 <= 5));
	printf("1!=10 ��� :: %d", (1 != 10));
}
