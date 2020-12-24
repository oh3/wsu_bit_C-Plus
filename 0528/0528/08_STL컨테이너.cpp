//07_STL(Standard Template Library)
/*
�����̳�  (�����������) = �츮�� ������� MyArr ���ø� Ŭ����
�˰���, (ù���ڿ� �ι�°���ڴ� ������ ����)
���ͷ�����, ��Ÿ���
*/

#include <iostream>
#include <vector>		//�迭Ŭ���� 
using namespace std;

vector<int> vlist;

void fun_InfoPrint()
{
	cout << "�ִ�����ũ��(max) : " << vlist.capacity() << endl;
	cout << "�������尳��(size) : " << vlist.size() << endl;
	cout << "���嵥����" << endl;
	//��ȸ
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
		cout << "����" << endl;
	cout << "�˻� ��� : " << *ret << endl;
}

void fun_delete()
{
	vector<int>::iterator itr = vlist.begin();

	itr = itr + 3;	//itr ==> �迭 ������ 

	vlist.erase(itr);	//�迭�� 4��° �����͸� ����
}

int main()
{
	fun_InfoPrint();
	fun_Insert();			fun_InfoPrint();
	fun_select();
	fun_delete();			fun_InfoPrint();
	return 0;
}