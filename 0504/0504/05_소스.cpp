/************************************************************
main 함수에 에러가 없도록 코드를 완료하시오.
*************************************************************/

#include <iostream>
using namespace std;

struct Jumsu{
    int kor;
    int eng;
    int sum;
    float average;

    //국어점수
    void setKor(int n1) {
        kor = n1;
    }
    //영어점수
    void setEng(int n1) {
        eng = n1;
    }
    //국+영 합계
    int setSum() {
        sum = kor + eng;
        return sum;
    }
    //평균
    void setAverage() {
        average = (float)sum / 2;
      }
    //총합
    int getSum() {
        return setSum();
    }
    //출력
    void Print() {
        cout << "국어 점수 : " << kor << endl;
        cout << "영어 점수 : " << eng << endl;
        cout << "합  : " << sum << endl;
        cout << "평균 : " << average << endl;
    }

};

int main(){
    Jumsu j1;
    j1.setKor(100);    //kor 점수에 대입
    j1.setEng(95);     //eng  점수에 대입
    j1.setSum();       //저장된 eng점수와 kor점수의 합의 결과를 sum에 저장
    j1.setAverage();  // sum에 저장된 점수를 2로 나눈 결과값을 average에 저장
    cout << "총합 : " << j1.getSum() << endl;  //sum에 저장된 값을 반환
    j1.Print();        //아래와 같이 출력
                      //국어 : 100
                      //영어 : 95
                      //합    : 195
                      //평균 : 97.5

    return 0;
}
