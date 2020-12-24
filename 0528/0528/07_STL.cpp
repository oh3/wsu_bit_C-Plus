//07_STL(Standard Template Library)
/*
�����̳�,
�˰���, (ù���ڿ� �ι�°���ڴ� ������ ����)
���ͷ�����, ��Ÿ���
*/

#include <iostream>
using namespace std;

//find�Լ�
int* myfind(int* begin, int* end, int value)
{
	for (; begin != end; begin++)
	{
		if (*begin == value)
			return begin;
	}
	return begin;
}

//���ø�
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

//STL�ȿ��� find��� �̸��� �˰��� �Լ��� �ִ�. 

void exam1()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	//1,2���� : �����ǽ��۰���, 3����:ã����
	//���� : ������ ������ Ÿ�� 
	int* ret = find(arr, arr + 10, 6);
	if (ret == arr + 10)
		cout << "����.";
	else
		cout << *ret << endl;
}

int main()
{
	exam1();
	return 0;
}