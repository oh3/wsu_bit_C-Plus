/************************************************************
 class
 -> 아래 코드를 객체 중심의 코드로 변경하시오.
door라는 이름의 구조체를 정의할 것
맴버 변수는 int door 이며 나머지 함수들을 맴버 함수로
추가하고, 인자 전달을 제외할 것
7번은 Door라는 이름의 구조체를 정의할 것
으로 정정해 주세요
*************************************************************/
#include <iostream>
using namespace std;

sturct Door{

	int door;


};

enum { OPEN = 1, CLOSE, UNKNOWN };

void door_open(int* pDoor){
	*pDoor = OPEN;
}

void door_close(int* pDoor){
	*pDoor = CLOSE;
}

void show_door_status(int door){
	if (door == OPEN)
		cout << "Door is Open" << endl;

	else if (door == CLOSE)
		cout << "Door is Close" << endl;

	else
		cout << "I don't Know !!" << endl;
}

void main(){
	int door;
	show_door_status(door);
	door_open(&door);
	show_door_status(door);

	door_close(&door);
	show_door_status(door);
}
