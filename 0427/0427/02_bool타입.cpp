//02_boolŸ��.cpp

/*
���������� Ÿ�� >>  0 or 1
		bool  : true / false

���� : int
���� : char
�Ǽ� : float

*/

#include <iostream>
using namespace std;

int main() {

	bool istest;

	istest = true;
	cout << istest << endl;		//1

	istest = false;
	cout << istest << endl;		//0

	//============================
	// bool ����Ÿ���̱� ������ ���������� ����Ÿ���� 
	// �����ϸ� ��� �ɱ�??? 
	// ��� : Warnig (������ ����)
	//	bool ���� true, false Ű���常 ��������..
	// istest = 1;
	// istest = -1;

	cout << istest << endl;		//???


	return 0;
}