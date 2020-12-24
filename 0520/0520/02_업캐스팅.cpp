//02_업캐스팅.cpp
/*
[형변환]  : 부모와 자식간의 형 변환 관계
단, 주소값의 대입 개념임.		(값 X)

UP casting : 자식 --> 부모에게 대입 , 정상적인 형변환
Down casting 부모 --> 자식에게 대입
*/

#include <iostream>
using namespace std;


class Animal {
public:
	void Sound() {
		cout << " ??? " << endl;
	}
	void 먹는다() {
		cout << " 먹는다 " << endl;
	}
};


class Dog :public Animal {
public:
	//오버라이딩 멤버함수의 재정의
	void Sound() {
		cout << " 멍멍 " << endl;		
	}
	void 물기() {
		cout << "물다" << endl;		
	}
};

class Cat :public Animal {
public:
	//오버라이딩 멤버함수의 재정의
	void Sound() {
		cout << " 야옹 " << endl;				//재정의
	}
	void 발톱내밀기() {
		cout << "발톱내밀기" << endl;		//추가 확장
	}
};

int main() {

	//========================================
	Dog dog;
	dog.Sound();	
	dog.물기();
	dog.먹는다();

	Cat cat;
	cat.Sound();
	cat.발톱내밀기();
	cat.먹는다();
	//========================================
	
	//업캐스팅
	//컴파일러입장에서는 문법검사할 때
	//ani2의 타입은 Animal* 로 생각한다.
	//실제생성된거는 강아지가 생성됬지만 
	Animal* ani2 = &dog;
	
	//=========================================
	//다운캐스팅은 조심해야할 형변환
	//강제적인 형변환을 하기 때문에 원래 자식타입이 변경되도 에러를 감지 못함.
	//반드시 자신의 타입으로 형변환 하는 경우만 사용한다.
	Cat* pCat = (Cat*)ani2;
	pCat->발톱내밀기();


	//업캐스팅
	Animal* ani = new Dog;
	Animal* an1 = new Cat;

	return 0;
}