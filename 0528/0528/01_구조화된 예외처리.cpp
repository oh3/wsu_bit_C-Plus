//01_구조화된 예외처리
/*
구문작성시 정상적인 흐름 <-----> 비정상적인흐름(예외)
*/
#include <iostream>
using namespace std;

void exam1() {
	
	//if를 이용한 조건문으로 예외처리
	int num1 = 10, num2 = 0;
	if (num2 == 0) {				//조건을 통한 예외처리 
	
		cout << "0으로 나눌 수 없습니다." << endl;
	}else{
		float result = (float)num1 / num2;	//0으로 나눌수 없다.
		cout << result << endl;
	}

}

void exam2() {
	
	//try - catch문으로 예외처리	
	try {		//정상적인 코드의 흐름
		int num1 = 10, num2 = 0;

		if (num2 == 0)
			throw "0을 나눌 수 없습니다.";		//예외 발생부분
		
		float result = (float)num1 / num2;	//0으로 나눌수 없다.

		cout << result << endl;

	}catch(const char *msg){ //try 구문 안에서 예외 발생시 호출되는 부분

		cout << msg << endl;

	}

	/*
		try  //정상적인 코드의 흐름 
	{
		int num1 = 10, num2 = 2;
		if (num2 == 0)
			throw "0으로 나눌 수 없습니다.";  //예외를 발생(던지다)
		float result = (float)num1 / num2;	//0으로 나눌수 없다.
		cout << result << endl;

		throw 10;
		cout << "이 문장은 실행이 안됨" << endl;
	}
	catch (const char *msg)	//try구문 안에서 예외발생시 호출되는 부분 
	{
		cout << msg << endl; 
	}
	catch (int msg)
	{
		cout << msg << endl; 
	}
	catch (...)
	{
		cout << "모든 타입의 예외를 받을 수 있다." << endl; 
	}
	//.....

	*/

}

//나눗셈 결과 리턴하는 함수
float mydiv(int n1, int n2) {
	float result;
	if (n2 == 0)
		throw "0으로 나눌 수 없습니다.";
	result = (float)n1 / n2;
	return result;
}

void exam3() {
	try {
		float r = mydiv(-10, 10);
		cout << "결과값 : " << r << endl;
	}catch(const char *msg){
		cout << msg << endl;
	}		
}

int main() {
	
	exam3();

	return 0;
}