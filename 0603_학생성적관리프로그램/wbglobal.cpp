//wbglobal.cpp

#include "wbglobal.h"


//ȭ���� ����� �޼���
void wbglbal::clrscr()
{
	system("cls");
}

//ȭ���� ��� ���ߴ� �޼���
void wbglbal::pause()
{
    cout << "�ƹ�Ű�� ��������....";
    _getch();
}

//���� �Է¹޴� �޼���
int wbglbal::getnum(const char* title)
{
//    int num;
//    cin >> num;
//    return num;

    int num;
    char buf[255 + 1];

    cout << title << " : ";
    cin.getline(buf, 255); //���ۿ� �Է¹���, gets()�����ϴ�
    cin.clear();//cin ���� ���۸� ����
    sscanf_s(buf, "%d", &num); //���˿� �°� ���ۿ� ������ ������ ��ȯ

    return num;
}

// ���ڿ��� �Է¹޴� �޼���
const char* wbglbal::getstr(const char* title)
{
    char* buf = new char[255 + 1];

    cout << title << " : ";
    cin.getline(buf, 255);
    cin.clear();

    return buf;
}

//��� Ű(F1..)�� �Է¹޴� �޼���
keydata wbglbal::getkey()       //#include <conio.h>
{
    int key = _getch();
    if (key == 27) //ESC�� ���� ���� key ���� 27��
    {
        return ESC;
    }

    if (key == 0) //��� Ű�� ������ ���� getch�� ��ȯ���� 0��
    {
        //� ��� Ű�� �������� Ȯ���Ϸ��� getch�� �ٽ� ȣ���ؾ� ��
        //����ڿ��� �ٽ� Ű�� �Է¹޴� ���� �ƴ�
        key = _getch();

        switch (key) //�Է��� Ű�� ���� ��ӵ� �� ��ȯ
        {
        case 59: return F1;
        case 60: return F2;
        case 61: return F3;
        case 62: return F4;
        case 63: return F5;
        case 64: return F6;
        case 65: return F7;
        }
    }
    return NO_DEFINED; //���ŵ��� ���� Ű�� ������ ��
}
