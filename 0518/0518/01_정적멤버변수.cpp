//01_�����ɹ�����
/*
��� ���� �տ� static Ű���带 �߰�
Ŭ���� ����� �θ�(�ν��Ͻ� ����� �ƴ�)
*/
#include <iostream>
using namespace std;

//Ʈ����ī��
class Card {
	int number;			//1~10, J(11), Q(12), K (13)
	string shape;		//���̾Ƹ��, Ŭ�ι�, �����̵�, ��Ʈ

	//Ŭ�������(��? ��� �ν��Ͻ� ��ü���� ������ ���� ���´�.)
	//Ŭ���� �ܺο��� ���η� ����������Ѵ�.
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

//�������������� ������
//main ���� ���� ����
int Card::height = 600;
int Card::width = 600;

int main(){
	
	Card c1(1, "Ŭ�ι�");
	Card c2(2, "���̾Ƹ��");

	c1.Print();
	c2.Print();

	return 0;
}
