//11_ĸ��ȭ2
#include <iostream>
using namespace std;

//Step2) C++����� ����ü : ����ü�ȿ� ����� ������+ �Լ��� �� �� �ִ�.
//			==> Ȱ���ؼ� ĸ��ȭ�� ������ �� �ִ�.

struct wbtime{
	int hour;
	int min;
	int second;

	void printtime() {
		cout << hour << ":" << min << ":" << second << endl;
	}

	void currenttime() {
		hour = 21;
		min = 3;
		second = 35;
	}

	void changemintime(int _min) {
		min = _min;
	}
};

int main() {

	wbtime t1;
	t1.currenttime();		 //currenttime(&t1);
	t1.printtime();
	t1.changemintime(6);
	t1.printtime();

	return 0;
}