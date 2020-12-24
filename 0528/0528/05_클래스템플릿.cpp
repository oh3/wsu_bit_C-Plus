//03_Ŭ�������ø�
// ������ ����� Ŭ������ �ַ� ���� 
#include <iostream>
using namespace std;

template<typename T>
class MyArr  //0 �Ⱥ�  1 : ��
{
	T* arr;		//������ �����  <====================================
	int max;		//���� �ִ� ����
	int size;		//���� ���� ����,������ ��ġ��
public:
	MyArr(int _max)
	{
		max = _max;
		size = 0;
		arr = new T[max]; //<=========================================
	}
	~MyArr()
	{
		delete[] arr;
	}

public:
	int getSize() const { return size; }

public:
	void push_back(T value)  //<==============================
	{
		if (max <= size)
			throw "Overflow";
		arr[size] = value;
		size++;
	}

	T& operator[](int idx)	//<================================
	{
		return arr[idx];
	}

};

int main()
{
	MyArr<int> arr(26);		//���ø�Ŭ������ ����� ��븸 ����

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
		int value = arr[i];
		cout << value << " ";
	}
	cout << endl;

	return 0;
}