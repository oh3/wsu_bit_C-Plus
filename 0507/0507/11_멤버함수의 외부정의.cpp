//11_맴버함수의 외부정의
#include <iostream>
using namespace std;

//클래스 정의부에 맴버 함수의 구현 코드를 작성 
class Sample{
public:
	void foo() {  }
	int goo(int n1, int n2) {}
};

//맴버함수를 외부 정의
//.h파일에 클래스의 정의 
class Sample{
	int num;
public:
	//클래스 내부에서는 함수의 선언부만 작성
	void foo();
	int goo(int n1, int n2);
};

//.cpp파일에 맴버 함수를 정의 
//클래스 밖에서 맴버 함수의 정의 
void Sample::foo(){
	num = 100;
}

int Sample::goo(int n1, int n2){

}

int main(){
	return 0;
}