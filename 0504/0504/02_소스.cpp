/************************************************************
 ������ 2���� ��ȯ�ϴ� swap �Լ��� ���۷����� ����ؼ� �����Ͻÿ�.
*************************************************************/

#include <iostream>
using namespace std;

//swap �Լ� �Ű����� a�� b �׸��� �� ���� temp
void swap(int a, int b, int temp );

int main(){
	int num = 10, num1 = 20;

	//temp �� ���� ���� ����
	int temp = 0;

	//����
	swap(num, num1);

	//������
	cout << "num = " << num << endl;
	cout << "num1 = " << num1 << endl;

	return 0;
}

void swap(int a, int b, int temp){

	temp = a;
	a = b;
	b = temp;

}
