#include <iostream>
#include <string.h>
using namespace std;

/*

������ has a����(����������Ŭ�� ����-������ ������� ����)
��) �¾ ������ ���� ������ �¾�ٴ� ����

*/

class gun
{
private:
    int count; //�Ѿ��� ����

public:
    gun(int _count = 10)
    {
        count = _count;
    }

    void �������2()
    {
        if (count > 0)
        {
            cout << "��~~~~~~ " << endl;
            count--;
        }
        else
        {
            cout << "�������~~~" << endl;
        }
    }
};

class man
{
private:
    gun* g1;

public:
    man() //man�� ������� �� gun�� ���� �������.
    {
        g1 = new gun(2);

    }
    ~man() //man�� �Ҹ�� �� gun�� ���� �Ҹ��.
       // ������ �Ҹ��� ��ġ��
    {
        delete g1;
    }
    void �������1()
    {
        g1->�������2();
    }
};

int main()
{
    man man1; //����� ���� �� �ѵ� ���������� ���� �����.
    man1.�������1();
    man1.�������1();
    man1.�������1();
    man1.�������1();


    return 0;
}