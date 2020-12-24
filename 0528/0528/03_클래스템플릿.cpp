//03_Ŭ�������ø�
// ������ ����� Ŭ������ �ַ� ���� 
#include <iostream>
using namespace std;

//������ ����
class MyArr
{
	int* arr;		//������ ����� 
	int max;		//���� �ִ� ����
	int size;		//���� ���� ����,������ ��ġ��
public:
	MyArr(int _max)
	{
		max = _max;
		size = 0;
		arr = new int[max];
	}
	~MyArr()
	{
		delete[] arr;
	}

public:
	int getSize() const { return size; }

public:
	void push_back(int value)
	{
		if (max <= size)
			throw "Overflow";
		arr[size] = value;
		size++;

	}

	int& operator[](int idx)
	{
		return arr[idx];
	}

};

int main()
{
	MyArr arr(30);

	//============== Insert =============================
	try
	{
		for (int i = 0; i < 30; i++)
		{
			arr.push_back(i + 1);
		}
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
	//============== Insert =============================

	//==============select ===============================
	cout << arr[2] << endl;  // 3

	//============== update ==============================
	arr[2] = 30;
	cout << arr[2] << endl;


	//============== selectall ==============================
	for (int i = 0; i < arr.getSize(); i++)
	{
		int value = arr[i];
		cout << value << "\t";
	}
	cout << endl;

	return 0;
}