//07_STL(Standard Template Library)
/*
컨테이너,
알고리즘, (첫인자와 두번째인자는 구간의 개념)
이터레이터, 기타등등
*/

#include <iostream>
using namespace std;

//find함수
int* myfind(int* begin, int* end, int value)
{
	for (; begin != end; begin++)
	{
		if (*begin == value)
			return begin;
	}
	return begin;
}

//템플릿
template <typename T1, typename T2>
T1 myfind1(T1 begin, T1 end, T2 value)
{
	for (; begin != end; begin++)
	{
		if (*begin == value)
			return begin;
	}
	return begin;
}

//STL안에도 find라는 이름의 알고리즘 함수가 있다. 

void exam1()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	//1,2인자 : 구간의시작과끝, 3인자:찾을값
	//리턴 : 구간과 동일한 타입 
	int* ret = find(arr, arr + 10, 6);
	if (ret == arr + 10)
		cout << "없다.";
	else
		cout << *ret << endl;
}

int main()
{
	exam1();
	return 0;
}