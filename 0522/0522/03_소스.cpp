/*
03. 아래 코드가 실행될 수 있는 클래스 구현
Date 클래스 : 년, 월, 일을 맴버 변수로 가지고 있다.
Product 클래스 : 회사, 제품, Date클래스 맴버, 가격을 가지고 있다.
즉 Date와 Product는 has_a관계이다.(포함관계)
힌트)

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

class Product : public Date {
public:
    char product[30];         //제품
    char company[20];       //회사
    int price;                      //가격

public:
    Product(const char* _product, const char* _company, int _price)
        :Date(yy, mm, dd){
        strcpy_s(product, sizeof(product), _product);
        strcpy_s(company, sizeof(company), _company);
        price = _price;
    }

public:
    //출력
    void OutProduct() {
        cout << product;
        cout << company;
        cout << yy << "-";
        cout << mm << "-";
        cout << dd << endl;
    }
};

int main(){
     Product S("새우깡","농심",2009,8,15,900);
     S.OutProduct();                   //제품의 모든 정보 출력
}