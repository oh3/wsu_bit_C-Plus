//wbglobal.h
#pragma once

#include <iostream>
using namespace std;
#include <conio.h>

enum keydata
{
    NO_DEFINED, F1, F2, F3, F4, F5, F6, F7, ESC
};

class wbglbal
{
public:
    static void clrscr();                        //ȭ���� ����� �޼���
    static void pause();                         //ȭ���� ��� ���ߴ� �޼���
    static int getnum(const char* title);        //���� �Է¹޴� �޼���
    static const char* getstr(const char* title); //���ڿ��� �Է¹޴� �޼���
    static keydata getkey();                    //��� Ű�� �Է¹޴� �޼���

private:
    wbglbal()
    {
    }

    ~wbglbal()
    {
    }
};