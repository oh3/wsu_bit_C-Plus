//01_상속.cpp

/*
-- 내가 만들고자 하는 객체를 분석해 보았더니 공통부분이 있다.
강아지 : 소리를낸다()
고양이 : 소리를낸다()
*/

#include <iostream>
using namespace std;

//step1 캡슐화 개념으로 클래스 구성한 방법
/* 
class Dog {
public:
	void Sound() {
		cout << "멍멍" << endl;
	}
};

class Cat {
public:
	void Sound() {
		cout << "야옹" << endl;
	}

};

int main(){

	return 0;
}
*/

//step2 : 상속 구조로 개선한 방법
//자식들이 공통 부분을 부모에게 구현

class Animal {
public:
	void Sound() {
		cout << " ??? " << endl;
	}
};

// Animal 상속 받음
class Dog :public Animal{
public:
	//오버라이딩
	void Sound() {
		cout << " 멍멍 " << endl;
	}
};
// Animal 상속 받음
class Cat :public Animal {
public:
	//오버라이딩
	void Sound() {
		cout << " 야옹 " << endl;
	}
};

int main() {

	Dog dog;				
	dog.Sound();

	Cat cat;					
	dog.Sound();

	//결과 : 부모에게 물려받은 ??? 밖에 출력못함

	return 0;
}
