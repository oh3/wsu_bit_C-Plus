//동적메모리
#include <iostream>
using namespace std;

/*
malloc   ==> new
free     ==> delete
*/

//C언어 : 정수값을 1개 저장할 공간을 힙에 만들고 싶다. 
void exam1()
{
	int* pnum = (int*)malloc(sizeof(int));

	*pnum = 10;

	free(pnum);
}

#include <time.h>
//C언어 : 동적배열을 생성할 수 있다. 
void exam2()
{
	srand((unsigned int)time(0));

	int max;
	cout << "문자를 저장할 최대 크기를 입력 : ";
	cin >> max;

	char* parr = (char*)malloc(sizeof(char) * max);

	for (int i = 0; i < max; i++)
	{
		char ch = (rand() % 26) + 'A'; // 'A' ~ 'Z'
		parr[i] = ch;
	}

	for (int i = 0; i < max; i++)
	{
		cout << parr[i] << " ";
	}
	cout << endl;

	free(parr);
}

//C++언어 : 정수값을 1개 저장할 공간을 힙에 만들고 싶다. 
void exam3()
{
	//	int* pnum = (int*)malloc(sizeof(int));

		//사용패턴 1
	int* pnum = new int;  //정수값을 저장할 수 있는 공간 한 개 생성
	*pnum = 10;
	delete pnum;

	//사용패턴 2
	char* pch1 = new char('A');  //문자를 저장할 수 있는 공간 한 개 생성,'A'로 초기화
	cout << *pch1 << endl; //'A'
	delete pch1;

	//사용패턴 3
	cout << "몇 개 : ";
	int max;
	cin >> max;
	char* pch2 = new char[max];		// sizeof(char)*max

	for (int i = 0; i < max; i++)
	{
		char ch = (rand() % 26) + 'A'; // 'A' ~ 'Z'
		pch2[i] = ch;
	}

	for (int i = 0; i < max; i++)
	{
		cout << pch2[i] << " ";
	}
	cout << endl;

	delete[] pch2;
}


int main()
{
	exam3();

	return 0;
}