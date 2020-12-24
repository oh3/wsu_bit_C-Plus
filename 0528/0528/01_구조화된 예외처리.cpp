//01_����ȭ�� ����ó��
/*
�����ۼ��� �������� �帧 <-----> �����������帧(����)
*/
#include <iostream>
using namespace std;

void exam1() {
	
	//if�� �̿��� ���ǹ����� ����ó��
	int num1 = 10, num2 = 0;
	if (num2 == 0) {				//������ ���� ����ó�� 
	
		cout << "0���� ���� �� �����ϴ�." << endl;
	}else{
		float result = (float)num1 / num2;	//0���� ������ ����.
		cout << result << endl;
	}

}

void exam2() {
	
	//try - catch������ ����ó��	
	try {		//�������� �ڵ��� �帧
		int num1 = 10, num2 = 0;

		if (num2 == 0)
			throw "0�� ���� �� �����ϴ�.";		//���� �߻��κ�
		
		float result = (float)num1 / num2;	//0���� ������ ����.

		cout << result << endl;

	}catch(const char *msg){ //try ���� �ȿ��� ���� �߻��� ȣ��Ǵ� �κ�

		cout << msg << endl;

	}

	/*
		try  //�������� �ڵ��� �帧 
	{
		int num1 = 10, num2 = 2;
		if (num2 == 0)
			throw "0���� ���� �� �����ϴ�.";  //���ܸ� �߻�(������)
		float result = (float)num1 / num2;	//0���� ������ ����.
		cout << result << endl;

		throw 10;
		cout << "�� ������ ������ �ȵ�" << endl;
	}
	catch (const char *msg)	//try���� �ȿ��� ���ܹ߻��� ȣ��Ǵ� �κ� 
	{
		cout << msg << endl; 
	}
	catch (int msg)
	{
		cout << msg << endl; 
	}
	catch (...)
	{
		cout << "��� Ÿ���� ���ܸ� ���� �� �ִ�." << endl; 
	}
	//.....

	*/

}

//������ ��� �����ϴ� �Լ�
float mydiv(int n1, int n2) {
	float result;
	if (n2 == 0)
		throw "0���� ���� �� �����ϴ�.";
	result = (float)n1 / n2;
	return result;
}

void exam3() {
	try {
		float r = mydiv(-10, 10);
		cout << "����� : " << r << endl;
	}catch(const char *msg){
		cout << msg << endl;
	}		
}

int main() {
	
	exam3();

	return 0;
}