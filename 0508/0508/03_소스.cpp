/************************************************************
 �Ʒ� �ڵ尡 ����� �� �ִ� Ŭ���� ����
       ��, PositionŬ������ �Ʒ��� ���� �ɹ������� �����Ǿ� �ִ�.
       int x,  int y, char ch
*************************************************************/
#include <iostream>
using namespace std;

class Position {

public:
    Here(int a, int b, char c) {

    }
    There(int a, int b) {

    }
    Where(char c) {

    }

};


void main()
{
    Position Here(30, 10, 'A');  //x 30, y 10, ch 'A'�� �ʱ�ȭ
    Position There(40, 5);      //x 40, y 5, ch �� 'X'�� �ʱ�ȭ
    Position Where('K');      // x 0, y 0, ch �� 'K'�� �ʱ�ȭ

    Here.OutPosition();    //����� ������ ���·� ��� :  [30,20] => A
    There.OutPosition();
    Where.OutPosition();
}
