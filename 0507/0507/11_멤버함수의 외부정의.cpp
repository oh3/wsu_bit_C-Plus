//11_�ɹ��Լ��� �ܺ�����
#include <iostream>
using namespace std;

//Ŭ���� ���Ǻο� �ɹ� �Լ��� ���� �ڵ带 �ۼ� 
class Sample{
public:
	void foo() {  }
	int goo(int n1, int n2) {}
};

//�ɹ��Լ��� �ܺ� ����
//.h���Ͽ� Ŭ������ ���� 
class Sample{
	int num;
public:
	//Ŭ���� ���ο����� �Լ��� ����θ� �ۼ�
	void foo();
	int goo(int n1, int n2);
};

//.cpp���Ͽ� �ɹ� �Լ��� ���� 
//Ŭ���� �ۿ��� �ɹ� �Լ��� ���� 
void Sample::foo(){
	num = 100;
}

int Sample::goo(int n1, int n2){

}

int main(){
	return 0;
}