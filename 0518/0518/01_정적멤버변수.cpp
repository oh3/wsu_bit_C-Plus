//01_정적맴버변수
/*
멤버 변수 앞에 static 키워드를 추가
클래스 멤버라 부름(인스턴스 멤버가 아님)
*/
#include <iostream>
using namespace std;

//트럼프카드
class Card {
	int number;			//1~10, J(11), Q(12), K (13)
	string shape;		//다이아몬드, 클로바, 스페이드, 하트

	//클래스멤버(왜? 모든 인스턴스 객체마다 동일한 값을 갖는다.)
	//클래스 외부에서 별로로 생성해줘야한다.
	static int width;
	static int height;
public:
	Card(int _number, string _shape) {
		number = _number;
		shape= _shape;
		//width = 200;
		//height = 600;

	
	}
public:
	void Print(){
		cout << number << ", " << shape << ", " << width << ", " << height << endl;
	}

};

//정적전역공간에 생성됨
//main 보다 먼저 실행
int Card::height = 600;
int Card::width = 600;

int main(){
	
	Card c1(1, "클로바");
	Card c2(2, "다이아몬드");

	c1.Print();
	c2.Print();

	return 0;
}
