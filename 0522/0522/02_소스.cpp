/************************************************************
  02. �Ʒ� �ڵ尡 ����� �� �ִ� Ŭ���� ����
      Date Ŭ���� : ��, ��, ���� �ɹ� ������ ������ �ִ�.
      Time Ŭ���� : ��, ��, �ʸ� �ɹ� ������ ������ �ִ�.
      Now  Ŭ���� : ���� 2��  Ŭ������ ���� ����Ѵ�.
       ��Ʈ)  class Now : public Time, public Now
               Now�� �����ڿ��� ��� �θ��� ���� ����� ȣ��
************************************************************/
#include <iostream>
using namespace std;

//Date Ŭ���� : ��, ��, ���� �ɹ� ������ ������ �ִ�.
class Date {
public:
    int yy;   //��
    int mm;  //��
    int dd;  //�� 
public:
    Date(int _yy, int _mm, int _dd) {
        yy = _yy;
        mm = _mm;
        dd = _dd;
    }
};

//Time Ŭ���� : ��, ��, �ʸ� �ɹ� ������ ������ �ִ�.
class Time {
public:
    int h;  //��
    int m;//��
    int c;//��
public:
    Time(int _h, int _m, int _c) {
        h = _h;
        m = _m;
        c = _c;
    }

};

//Now  Ŭ���� : ���� 2��  Ŭ������ ���� ����Ѵ�.
class Now :public Date, Time{
 public:
     Now(int _yy, int _mm, int _dd, int _h, int _m, int _c) 
         :Date(_yy, _mm, _dd), Time(_h, _m, _c) {

    }
public:
    void OutNow() {
        cout << yy << "-";
        cout << mm << "-";
        cout << dd;
        cout << " ";
        cout << h << ":";
        cout << m << ":";
        cout << c << endl;
    }

};

int main(){
    Now N(2009, 5, 10, 12, 30, 58);
    N.OutNow();		// ��¥ �ð� ��� ex)"2020-05-22 09:10:25"
        
}