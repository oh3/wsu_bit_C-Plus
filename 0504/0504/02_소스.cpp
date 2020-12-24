/************************************************************
 정수값 2개를 교환하는 swap 함수를 레퍼런스를 사용해서 구현하시오.
*************************************************************/

#include <iostream>
using namespace std;

//swap 함수 매개변수 a와 b 그리고 빈 공간 temp
void swap(int a, int b, int temp );

int main(){
	int num = 10, num1 = 20;

	//temp 빈 공간 변수 선어
	int temp = 0;

	//스왑
	swap(num, num1);

	//결과출력
	cout << "num = " << num << endl;
	cout << "num1 = " << num1 << endl;

	return 0;
}

void swap(int a, int b, int temp){

	temp = a;
	a = b;
	b = temp;

}
