//03_업캐스팅과 가상멤버함수.cpp
/*
만약 다수의 강아지, 고양이 객체를 생성해서 관리하고 한다면?
Dog dog[5], Cat cat[5];
추가로 동물의 종류가 늘어난다면?
-> 동물별 배열의 갯수가 증가될것이다.
하지만 업캐스팅을 사용한다면 하나의 배열로 해결이 가능하다.
Animal ani[100]
*/
#include <iostream>
using namespace std;

class Animal{
public:
	//가상멤버함수
	//자식의 의해 재정의가 될만한 함수는 가성멤버 함수로 만든다.
	//부모의 포인터로 해당 메서드를 호출하면 자식의 재정의 된 메서드가
	// 호출된다.
	virtual void Sound() { cout << "????????????????" << endl; }
};

class Dog : public Animal{
public:
	void Sound() { cout << "멍멍~~~" << endl; }
};

class Cat : public Animal{
public:
	//오버라이딩(맴버함수의 재정의)
	void Sound() { cout << "야옹야옹~~~" << endl; }
};

int main(){

	//업캐스팅을 이용한 통합 관리
	Animal* woori[4];		//4개의 객체의 주소를 저장할 수 있는 배열생성
	woori[0] = new Dog;
	woori[1] = new Cat;
	woori[2] = new Cat;
	woori[3] = new Cat;

	//모든동물 소리를 동일한 객체를 이용해서 호출
	//어쩔때는 개소리, 어쩔때는 고양이 소리 난다.
	//이를 다형성이라 한다.
	for (int i = 0; i < 4; i++) {
		woori[i]->Sound();	
	}

	return 0;
}
