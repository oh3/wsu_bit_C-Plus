//04_�Լ��ǿ����ε� : C++���� �߰��� ����

/*
C������		�Լ� �ĺ��ڴ� �Լ���
C++����		�Լ� �ĺ��ڴ� �Լ��� + �Ű���������Ʈ
	�Լ��� �̸��� ������ �Ű������� �ٸ��� �ٸ� �Լ��� ����.

�� �ʿ��Ѱ�? ������� ����
*/

#include <iostream>
using namespace std;

/*
//�Լ��� �����ε�
//�Լ����� ������ �Ű������� �ٸ�
bool isequal(int n1, int n2) {
	return n1 == n2;
}

bool isequal(float n1, float n2) {
	return n1 == n2;
}

bool isequal(char n1, float n2) {
	return n1 == n2;
}

int main() {

	cout << isequal(10, 20) << endl; // 0 ����
	cout << isequal(20, 20) << endl; // 1 ��

	cout << isequal(10.1f, 20.2f) << endl;
	cout << isequal(10.1f, 20.1f) << endl;

	return 0;

}
*/


//�Լ��� �����ε�
//add int
int add(int n1, int n2) {

	return n1 + n2;
}
//add float
int add(float n1, float n2) {

	return n1 + n2;
}
//add dobule
int add(double n1, double n2) {

	return n1 + n2;
}

int main() {

	cout << add(10, 20) << endl;
	cout << add(10.1f, 20.1f) << endl;
	cout << add(20.3, 30.3) << endl;

}