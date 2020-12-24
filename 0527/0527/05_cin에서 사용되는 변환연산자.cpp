//05_cin에서 사용되는 변환연산자
#include <iostream>
using namespace std;

/*
class istream
{
public:
	operator bool() {  cin의 상태값을 true, false로 반환;}
}
istream  cin;
*/

void exam1()
{
	int number;
	cout << "정수 입력 : ";		cin >> number;
	//cin ==> bool로 변환
	if (cin)
		cout << "성공" << endl;
	else
		cout << "실패" << endl;

	cout << "저장된 값 : " << number << endl;
}

//무조건 올바른 정수를 반환하는 함수
//cin객체는 잘못된 입력이 발생하면 더 이상 사용할 수 없도록
//고장난다.
//따라서 그럴 경우에는 다시 정상적으로 복구를 해주어야 한다. 
int InputNumber(const char* msg)
{
	int number;
	while (true)
	{
		cout << msg << " : ";		cin >> number;
		if (cin)
			return number;

		cin.clear();		//cin객체 복구
		cin.ignore();		//버퍼 초기화 
	}
}

void exam2()
{
	cout << "결과값 : " << InputNumber("정수입력") << endl;
}
int main()
{
	exam2();
}