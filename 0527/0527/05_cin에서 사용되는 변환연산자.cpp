//05_cin���� ���Ǵ� ��ȯ������
#include <iostream>
using namespace std;

/*
class istream
{
public:
	operator bool() {  cin�� ���°��� true, false�� ��ȯ;}
}
istream  cin;
*/

void exam1()
{
	int number;
	cout << "���� �Է� : ";		cin >> number;
	//cin ==> bool�� ��ȯ
	if (cin)
		cout << "����" << endl;
	else
		cout << "����" << endl;

	cout << "����� �� : " << number << endl;
}

//������ �ùٸ� ������ ��ȯ�ϴ� �Լ�
//cin��ü�� �߸��� �Է��� �߻��ϸ� �� �̻� ����� �� ������
//���峭��.
//���� �׷� ��쿡�� �ٽ� ���������� ������ ���־�� �Ѵ�. 
int InputNumber(const char* msg)
{
	int number;
	while (true)
	{
		cout << msg << " : ";		cin >> number;
		if (cin)
			return number;

		cin.clear();		//cin��ü ����
		cin.ignore();		//���� �ʱ�ȭ 
	}
}

void exam2()
{
	cout << "����� : " << InputNumber("�����Է�") << endl;
}
int main()
{
	exam2();
}