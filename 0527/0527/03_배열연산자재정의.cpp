//03_배열연산자재정의.cpp
#include <iostream>
using namespace std;

class MyArr {

	int* base;
	const int max;
public:
	MyArr(int _max) : max(_max){
		base = new int[_max];
	}
	~MyArr() {
		delete[] base;
	}
public:
	int GetData(int idx){
		return base[idx];
	}
	void SetData(int idx, int value){
		base[idx] = value;
	}

	int& operator[](int idx) {
		return base[idx];
	}
};

int main() {
	MyArr arr(3);
	arr.SetData(0, 10);
	arr.SetData(1, 20);
	arr.SetData(2, 30);

	for (int i = 0; i< 3; i++) {
		cout << arr.GetData(i) << ",";
	}
	cout << endl;

	//=====================
	MyArr arr1(3);
	arr1[0] = 10;			//arr1.operator[0];
	arr1[1] = 20;
	arr1[2] = 30;


	return 0;
}