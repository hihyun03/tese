#include <stdio.h>
#include <stdbool.h>

int main() {
	// ���׿����� :: ?
	// (���ǽ�) ? (���� �� ������ ��ɹ�) : (������ �� ������ ��ɹ�)
	bool t = (1 == 1) ? true : false;		//true�� ����
		// 1�� 1�� ���ٸ�, t�� true�� �����϶�.
		// �ƴ϶��, false�� �����϶�.
	(1 == 1) ? printf("���Դϴ�.") : printf("�����Դϴ�.");
}
