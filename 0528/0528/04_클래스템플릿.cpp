//03_Ŭ�������ø�
// ������ ����� Ŭ������ �ַ� ���� 
#include <iostream>
using namespace std;

//���ڸ� ����
class MyArr  //0 �Ⱥ�  1 : ��
{
	char* arr;		//������ �����  <====================================
	int max;		//���� �ִ� ����
	int size;		//���� ���� ����,������ ��ġ��
public:
	MyArr(int _max)
	{
		max = _max;
		size = 0;
		arr = new char[max]; //<=========================================
	}
	~MyArr()
	{
		delete[] arr;
	}

public:
	int getSize() const { return size; }

public:
	void push_back(char value)  //<==============================
	{
		if (max <= size)
			throw "Overflow";
		arr[size] = value;
		size++;
	}

	char& operator[](int idx)	//<================================
	{
		return arr[idx];
	}

};

int main()
{
	MyArr arr(26);

	//============== Insert =============================
	try
	{
		for (int i = 0; i < 26; i++)
		{
			arr.push_back(i + 65);
		}
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
	//============== Insert =============================

	//==============select ===============================
	cout << arr[2] << endl;  // C

	//============== update ==============================
	arr[2] = 'c';
	cout << arr[2] << endl;	//c


	//============== selectall ==============================
	for (int i = 0; i < arr.getSize(); i++)
	{
		char value = arr[i];
		cout << value << " ";
	}
	cout << endl;

	return 0;
}