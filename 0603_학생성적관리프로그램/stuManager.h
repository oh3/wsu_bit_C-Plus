//stuManager.h

#pragma once

//6�� 
//vector ����������� ����
#include <vector>
#include "wbglobal.h"
#include "Student.h"
using namespace std;

class stuManager
{
private:
	vector<Student*> base;	//������ �����

	//6.1��
public:
	stuManager();
	~stuManager();

	//8��
public:
	void Run();

private:
	keydata SelectMenu();


	//10�� �Լ� �����ϴ°�
	void StuListAll();
	void StuInsert();
	void StuSelectNum();
	void StuSelectName();
	void StuRemove();
	void StuUpdate();
};

