//02_���ø�
/*
���ø� : ����(�Լ�,Ŭ����)�� ����� Ʋ
*/
#include <iostream>
using namespace std;

//�پ��� Ÿ���� ���� �� �ִ� ������ �̸��� �Լ��� ����� �ʹ�.

//1�� �����ε�
/*
int mycompare(int n1, int n2) {
	return n1 - n2;
}
int mycompare(char n1, char n2) {
	return n1 - n2;
}
int mycompare(double n1, double n2) {
	return n1 - n2;
}
*/

//2�� �Լ����ø� == �Լ��� ���� �� �ִ� Ʋ
// �����Ϸ��� �����Ǵ� Ʋ�� �̿��ؼ� �Լ��� ����� ��.
/*
template<typename T>
int mycompare(T n1, T n2) {
	return n1 - n2;
}

int main() {

	cout << mycompare(20, 10) << endl;		//���, 0, ����
	cout << mycompare('A', 'C') << endl;		//���, 0, ����
	cout << mycompare(10.2, 20.1) << endl;		//���, 0, ����

	return 0;
}

*/

//���ø� �Լ� Ȱ��
template <typename T>
//��
T max(T n1, T n2) {
	return (n1 > n2 ? n1 : n2);
}

int main() {

	//���ø� �Լ�
	//1. �Ͻ���
	cout << max(10, 20) << endl;

	//2. ����� ( ǥ�� ) 
	cout << max<char>('a', 'b') << endl;

	return 0;
}


