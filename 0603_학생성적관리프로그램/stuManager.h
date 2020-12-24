//stuManager.h

#pragma once

//6번 
//vector 데이터자장소 생성
#include <vector>
#include "wbglobal.h"
#include "Student.h"
using namespace std;

class stuManager
{
private:
	vector<Student*> base;	//데이터 저장소

	//6.1번
public:
	stuManager();
	~stuManager();

	//8번
public:
	void Run();

private:
	keydata SelectMenu();


	//10번 함수 정의하는곳
	void StuListAll();
	void StuInsert();
	void StuSelectNum();
	void StuSelectName();
	void StuRemove();
	void StuUpdate();
};

