//05_�Լ��� �⺻��
/*
�Լ��� ���� �� �Ű������� �̸� ���� ���س���.
�⺻���� ���� �Լ��� ȣ���� �� ���� ���� ���� �ȵǸ� �⺻���� ���ȴ�.
*/
#include <iostream>
using namespace std;

int add(int n1, int n2, int n3 = 0, int n4 = 0) {

	return n1 + n2 + n3 + n4;
}


int main() {
	
	cout << add(10, 20) << endl; // 10 20 0 0 �����.
	cout << add(10, 20, 30) << endl; // 10 20 30 0 
	cout << add(10, 20, 30, 40) << endl; // 10 20 30 40

	return 0;
}