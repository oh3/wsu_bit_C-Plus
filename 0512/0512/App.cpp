//App.cpp
#include <iostream>
using namespace std;
#include <conio.h>
#include "App.h"

App::App(){
	con = new Control;
}
App::~App(){
	delete con;
}

void App::InitInstance(){
	Logo();
}

void App::Run(){
	char idx;
	while (true){
		system("cls");
		con->SelectAll();
		idx = MenuPrint();
		switch (idx)
		{
		case '1':	con->Insert();		break;
		case '2':	con->Select();		break;
//		case '3':	con_update();		break;
//		case '4':	con_delete();		break;
		case '5':   return;
		}
		system("pause");
	}
}

void App::ExitInstance(){
	Ending();
}

//�ΰ�
void App::Logo(){
	system("cls");	//"cls" : ȭ���� ����� ��ɾ�
	printf("*****************************************************\n");
	printf(" ��ۺ�Ʈ �ܱ� ??�� C++��� ����\n");
	printf(" OOP�� �̿��� ȸ�� ���� ���α׷�\n");
	printf(" 2020�� 05�� 14��\n");
	printf(" ccm\n");
	printf("*****************************************************\n");
	system("pause");	//"pause" : ��� ���� ��ɾ�
}

//�޴� ���
char App::MenuPrint(){
	printf("*****************************************************\n");
	printf("[1] �� ��(insert)\n");
	printf("[2] �� ��(select)\n");
	printf("[3] �� ��(update)\n");
	printf("[4] �� ��(delete)\n");
	printf("[5] ����\n");
	printf("*****************************************************\n");

	//	char idx;
	//	idx = _getch();		//Ư���� ������ ���� �Է��Լ�
	//	return idx;			//ȭ�鿡 ���� ����� X
	return _getch();	//����Ű ���� ���۷� ����

}
//����
void App::Ending(){
	system("cls");
	printf("*****************************************************\n");
	printf(" ���α׷��� �����մϴ�.\n");
	printf("*****************************************************\n");
	system("pause");
}
