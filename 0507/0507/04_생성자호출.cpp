//04_������ȣ��
#include <iostream>
using namespace std;

struct Data {

public:
	//1�� ������
	Data() {
		cout << "Data()" << endl;
	}
	//2�� ������
	Data(int n) {
		cout << "Data(int)" << endl;
	}
	//3�� ������
	Data(char ch, int n) {
		cout << "Data(char, int)" << endl;
	}
};

//��ü ������ �?, � ��ȣ�� �����ڸ� ȣ���ų��?
//��ü ���� ����
int main() {

	//Data d1;		//1��, 1��
	//Data n2[5];	//5��, 1�� 
	//Data n3(3);		//1��, 2��
	//Data n4('a,10');	//1��, 3��
	//Data n5[5] = { Data(10), Data('a', 10) };	//5�� {2,3,1,1,1)

	//============================================
	Data *n6;						//  0
	//n6 = new Data;			// Data ��ü�� �����ϰڴ�. 1�� 1��° ������
	//n6 = new Data(10);		//1��, 2��
	n6 = new Data[5];			//5��, 1��



	return 0;
}