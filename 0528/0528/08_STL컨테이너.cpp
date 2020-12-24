//07_STL(Standard Template Library)
/*
컨테이너  (데이터저장소) = 우리가 만들었던 MyArr 템플릿 클래스
알고리즘, (첫인자와 두번째인자는 구간의 개념)
이터레이터, 기타등등
*/

#include <iostream>
#include <vector>		//배열클래스 
using namespace std;

vector<int> vlist;

void fun_InfoPrint()
{
	cout << "최대저장크기(max) : " << vlist.capacity() << endl;
	cout << "현재저장개수(size) : " << vlist.size() << endl;
	cout << "저장데이터" << endl;
	//순회
	for (int i = 0; i < (int)vlist.size(); i++)
	{
		int value = vlist[i];
		cout << value << " ";
	}
	cout << endl;
}

void fun_Insert()
{
	for (int i = 0; i < 100; i++)
	{
		vlist.push_back(i + 1);
	}
}

void fun_select()
{
	vector<int>::iterator begin = vlist.begin();
	vector<int>::iterator end = vlist.end();
	vector<int>::iterator ret = find(begin, end, 5);
	if (ret == vlist.end())
		cout << "없다" << endl;
	cout << "검색 결과 : " << *ret << endl;
}

void fun_delete()
{
	vector<int>::iterator itr = vlist.begin();

	itr = itr + 3;	//itr ==> 배열 포인터 

	vlist.erase(itr);	//배열의 4번째 데이터를 삭제
}

int main()
{
	fun_InfoPrint();
	fun_Insert();			fun_InfoPrint();
	fun_select();
	fun_delete();			fun_InfoPrint();
	return 0;
}