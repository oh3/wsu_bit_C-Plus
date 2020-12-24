/*
03. �Ʒ� �ڵ尡 ����� �� �ִ� Ŭ���� ����
Date Ŭ���� : ��, ��, ���� �ɹ� ������ ������ �ִ�.
Product Ŭ���� : ȸ��, ��ǰ, DateŬ���� �ɹ�, ������ ������ �ִ�.
�� Date�� Product�� has_a�����̴�.(���԰���)
��Ʈ)

class A {
public:
    A(int n1, int n2) {}
};

class B {
    A* pa;
public:
    B(int n1, int n2) {
        pa = new A(n1, n2);
    }
    ~B() {
        delete pa;
    }
};
*/
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

class Product : public Date {
public:
    char product[30];         //��ǰ
    char company[20];       //ȸ��
    int price;                      //����

public:
    Product(const char* _product, const char* _company, int _price)
        :Date(yy, mm, dd){
        strcpy_s(product, sizeof(product), _product);
        strcpy_s(company, sizeof(company), _company);
        price = _price;
    }

public:
    //���
    void OutProduct() {
        cout << product;
        cout << company;
        cout << yy << "-";
        cout << mm << "-";
        cout << dd << endl;
    }
};

int main(){
     Product S("�����","���",2009,8,15,900);
     S.OutProduct();                   //��ǰ�� ��� ���� ���
}