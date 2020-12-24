//03_클래스템플릿
// 데이터 저장용 클래스에 주로 사용됨 
#include <iostream>
using namespace std;

template<typename T>
class MyArr  //0 안변  1 : 변
{
	T* arr;		//데이터 저장소  <====================================
	int max;		//저장 최대 개수
	int size;		//현재 저장 개수,저장의 위치값
public:
	MyArr(int _max);
	~MyArr();

public:
	int getSize() const;

public:
	void push_back(T value);

	T& operator[](int idx);
};

//맴버함수의 외부정의
template<typename T>
MyArr<T>::MyArr(int _max)
{
	max = _max;
	size = 0;
	arr = new T[max];
}

template<typename T>
MyArr<T>::~MyArr()
{
	delete[] arr;
}

template<typename T>
int MyArr<T>::getSize() const
{
	return size;
}

template<typename T>
void MyArr<T>::push_back(T value)  //<==============================
{
	if (max <= size)
		throw "Overflow";
	arr[size] = value;
	size++;
}

template<typename T>
T& MyArr<T>::operator[](int idx)	//<================================
{
	return arr[idx];
}


int main()
{
	MyArr<int> arr(26);		//템플릿클래스는 명시적 사용만 가능

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