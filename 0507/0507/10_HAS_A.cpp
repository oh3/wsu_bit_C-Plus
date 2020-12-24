#include <iostream>
#include <string.h>
using namespace std;

/*

강력한 has a관계(라이프사이클이 동일-생성과 종료시점 동일)
예) 태어날 때부터 총을 가지고 태어난다는 가정

*/

class gun
{
private:
    int count; //총알의 개수

public:
    gun(int _count = 10)
    {
        count = _count;
    }

    void 총을쏜다2()
    {
        if (count > 0)
        {
            cout << "빵~~~~~~ " << endl;
            count--;
        }
        else
        {
            cout << "딸깍딸깍~~~" << endl;
        }
    }
};

class man
{
private:
    gun* g1;

public:
    man() //man이 만들어질 때 gun도 같이 만들어짐.
    {
        g1 = new gun(2);

    }
    ~man() //man이 소멸될 때 gun도 같이 소멸됨.
       // 생성과 소멸이 일치함
    {
        delete g1;
    }
    void 총을쏜다1()
    {
        g1->총을쏜다2();
    }
};

int main()
{
    man man1; //사람을 만들 때 총도 내부적으로 같이 만든다.
    man1.총을쏜다1();
    man1.총을쏜다1();
    man1.총을쏜다1();
    man1.총을쏜다1();


    return 0;
}