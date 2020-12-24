//�����޸�
#include <iostream>
using namespace std;

/*
malloc   ==> new
free     ==> delete
*/

//C��� : �������� 1�� ������ ������ ���� ����� �ʹ�. 
void exam1()
{
	int* pnum = (int*)malloc(sizeof(int));

	*pnum = 10;

	free(pnum);
}

#include <time.h>
//C��� : �����迭�� ������ �� �ִ�. 
void exam2()
{
	srand((unsigned int)time(0));

	int max;
	cout << "���ڸ� ������ �ִ� ũ�⸦ �Է� : ";
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

//C++��� : �������� 1�� ������ ������ ���� ����� �ʹ�. 
void exam3()
{
	//	int* pnum = (int*)malloc(sizeof(int));

		//������� 1
	int* pnum = new int;  //�������� ������ �� �ִ� ���� �� �� ����
	*pnum = 10;
	delete pnum;

	//������� 2
	char* pch1 = new char('A');  //���ڸ� ������ �� �ִ� ���� �� �� ����,'A'�� �ʱ�ȭ
	cout << *pch1 << endl; //'A'
	delete pch1;

	//������� 3
	cout << "�� �� : ";
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