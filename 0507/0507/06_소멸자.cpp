//06_�Ҹ���
/*
��ü�� �Ҹ�ɶ� �ڵ����� ȣ��
����Ÿ���� ����. �̸��� *����ü��, �Ű������� ����.
*/

#include <iostream>
using namespace std;

struct Data
{
public:
	Data() { cout << "Data()" << endl; }	
	Data(int n) { cout << "Data(int)" << endl; }
	~Data() { cout << "~Data()" << endl; }
};

int main() {
	//Data n1;		//main���ø޸𸮿� ����, main �Լ��� ����� �� 
	//Data n2[5];	//5��, 1�� 
	//Data n3(3);		//1��, 2��
	//Data n5[5] = { Data(10)};// 5, {2,3,1,1,1}

	//============================================
	Data* n6;						//  0
	n6 = new Data(10);			//Data ��ü��  ���޸𸮿� ����

	delete n6;						//n6 �ּҸ� ���� ������, �ش� �ּҿ� ������ ��ü �Ҹ�

	

	return 0;
}