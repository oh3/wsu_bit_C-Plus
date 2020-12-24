//03_클래스템플릿
// 데이터 저장용 클래스에 주로 사용됨 
#include <iostream>
using namespace std;

//문자를 저장
class MyArr  //0 안변  1 : 변
{
	char* arr;		//데이터 저장소  <====================================
	int max;		//저장 최대 개수
	int size;		//현재 저장 개수,저장의 위치값
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