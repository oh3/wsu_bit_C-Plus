/************************************************************
 class
 -> �Ʒ� �ڵ带 ��ü �߽��� �ڵ�� �����Ͻÿ�.
door��� �̸��� ����ü�� ������ ��
�ɹ� ������ int door �̸� ������ �Լ����� �ɹ� �Լ���
�߰��ϰ�, ���� ������ ������ ��
7���� Door��� �̸��� ����ü�� ������ ��
���� ������ �ּ���
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
