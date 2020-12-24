/************************************************************
  02. 아래 코드가 실행될 수 있는 클래스 구현
      Date 클래스 : 년, 월, 일을 맴버 변수로 가지고 있다.
      Time 클래스 : 시, 분, 초를 맴버 변수로 가지고 있다.
      Now  클래스 : 위의 2개  클래스를 다중 상속한다.
       힌트)  class Now : public Time, public Now
               Now의 생성자에서 모든 부모의 생성 방법을 호출
************************************************************/
#include <iostream>
using namespace std;

//Date 클래스 : 년, 월, 일을 맴버 변수로 가지고 있다.
class Date {
public:
    int yy;   //년
    int mm;  //월
    int dd;  //일 
public:
    Date(int _yy, int _mm, int _dd) {
        yy = _yy;
        mm = _mm;
        dd = _dd;
    }
};

//Time 클래스 : 시, 분, 초를 맴버 변수로 가지고 있다.
class Time {
public:
    int h;  //시
    int m;//분
    int c;//초
public:
    Time(int _h, int _m, int _c) {
        h = _h;
        m = _m;
        c = _c;
    }

};

//Now  클래스 : 위의 2개  클래스를 다중 상속한다.
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
    N.OutNow();		// 날짜 시간 출력 ex)"2020-05-22 09:10:25"
        
}