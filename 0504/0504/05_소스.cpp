/************************************************************
main �Լ��� ������ ������ �ڵ带 �Ϸ��Ͻÿ�.
*************************************************************/

#include <iostream>
using namespace std;

struct Jumsu{
    int kor;
    int eng;
    int sum;
    float average;

    //��������
    void setKor(int n1) {
        kor = n1;
    }
    //��������
    void setEng(int n1) {
        eng = n1;
    }
    //��+�� �հ�
    int setSum() {
        sum = kor + eng;
        return sum;
    }
    //���
    void setAverage() {
        average = (float)sum / 2;
      }
    //����
    int getSum() {
        return setSum();
    }
    //���
    void Print() {
        cout << "���� ���� : " << kor << endl;
        cout << "���� ���� : " << eng << endl;
        cout << "��  : " << sum << endl;
        cout << "��� : " << average << endl;
    }

};

int main(){
    Jumsu j1;
    j1.setKor(100);    //kor ������ ����
    j1.setEng(95);     //eng  ������ ����
    j1.setSum();       //����� eng������ kor������ ���� ����� sum�� ����
    j1.setAverage();  // sum�� ����� ������ 2�� ���� ������� average�� ����
    cout << "���� : " << j1.getSum() << endl;  //sum�� ����� ���� ��ȯ
    j1.Print();        //�Ʒ��� ���� ���
                      //���� : 100
                      //���� : 95
                      //��    : 195
                      //��� : 97.5

    return 0;
}
