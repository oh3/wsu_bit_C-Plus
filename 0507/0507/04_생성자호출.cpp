//04_생성자호출
#include <iostream>
using namespace std;

struct Data {

public:
	//1번 생성자
	Data() {
		cout << "Data()" << endl;
	}
	//2번 생성자
	Data(int n) {
		cout << "Data(int)" << endl;
	}
	//3번 생성자
	Data(char ch, int n) {
		cout << "Data(char, int)" << endl;
	}
};

//객체 생성은 몇개?, 어떤 번호의 생성자를 호출시킬까?
//객체 생성 패턴
int main() {

	//Data d1;		//1개, 1번
	//Data n2[5];	//5개, 1번 
	//Data n3(3);		//1개, 2번
	//Data n4('a,10');	//1개, 3번
	//Data n5[5] = { Data(10), Data('a', 10) };	//5개 {2,3,1,1,1)

	//============================================
	Data *n6;						//  0
	//n6 = new Data;			// Data 객체를 생성하겠다. 1개 1번째 생성자
	//n6 = new Data(10);		//1개, 2번
	n6 = new Data[5];			//5개, 1번



	return 0;
}