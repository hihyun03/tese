#include <stdio.h>

int main() {
	// �ڷ��� :: "������ ����"
	// �⺻���� �ڷ����� signed�� -> ������ ��� ��� ǥ��
	// unsigned�� -> 0�� ����� ǥ��0

	// ������ - short, int(��ǥ��), long
	// ǥ���� �� �ִ� ������ ���� ����
	short myShart;
	int myInt;		// -21�� ~ +21��
	unsigned int myUint;	// 0 ~ 42��
	long myLong;
	long long myLong;

	// �Ǽ��� - float, double(��ǥ��)
	// ���е�
	// 3.14 (float) / 3.1419... (double->�� ��Ȯ��)
	float myfloat;				// "%f"
	double myDouble;			// "%lf"
	
	// ������ - char
	char myChar;
}
