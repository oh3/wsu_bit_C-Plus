//06_���۷���
/*
������ == ����

*/
#include <iostream>
using namespace std;

void exam1() {
	int num = 10;

	int& rnum = num;		//rnum : ���۷��� : num������ ����
									//�ݵ�� ����� ���ÿ� �ʱ�ȭ...
	//==============================================

	cout << rnum << endl;		//10

	rnum = 20;

	cout << num << endl;		//20
	
	//�ּҰ� ������.
	cout << &rnum << endl;	//�޸��ּҰ�
	cout << &num << endl;	//�޸��ּҰ�


}

//������ ��� �� 1 : �Ű����� ����
/*
1) �� ����		(Call by value)
2) �ּҰ� ����(Call by address)		: ������ ���� ���� �� ����
3) ���������� (Call by refrence)	: ���� ���ް� ���� �� ����� ��´�.
*/

void exam2_1(int n1, int* n2, int& n3) {

	n1 = 20;			//exam2_1 ���ø޸𸮿� �ִ� n1�� ������ ����.
	*n2 = 30;		//exam2�� ���ø޸𸮿� �ִ� num1�� ������ ����.
	n3 = 40;			//n3�� exam2�� ���ø޸𸮿��ִ� num1�� ��Ī�̴�.

}

void exam2() {
	
	int num1 = 10;

	exam2_1(num1, &num1, num1); // ������, �ּҰ�����, ����������

	cout << num1 << endl;

}

//������ ��� �� 2 : ������ ����
int arr[3] = { 10,20,30 };  //�Լ��� ���� == �������� -> ���������޸𸮿� ����

int exam3_1(int idx) {
	return arr[idx];
}

//int�� ������ ����
int& exam3_2(int idx) {
	return arr[idx];
}

void exam3() {

	int n1 = exam3_1(2);
	cout << n1 << endl;	//30

	int n2 = exam3_2(2);
	cout << n2 << endl;	//30

	//============================

	//�Լ��� ȣ���� ���Կ����� �ݵ�� R value���� �̷������.
	//exam3_1(2) = 200;		// 30 = 200;
	exam3_2(2) = 200;			// arr[2] =200;

	cout << arr[0]<<  "," << arr[1] << ","<< arr[2] << endl;

}

int main() {

	exam3();
	return 0;
}