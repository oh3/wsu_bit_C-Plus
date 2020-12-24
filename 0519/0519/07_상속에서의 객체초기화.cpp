//07_��ӿ����ǰ�ü�ʱ�ȭ
/*
��ü�ʱ�ȭ�� �ڽ��� �����ڿ���.....
*/
#include <iostream>
using namespace std;

class Person
{
protected:
	char name[20];
	int  age;
public:
	Person(const char* _name, int _age)
	{
		strcpy_s(name, sizeof(name), _name);
		age = _age;
	}

public:
	int getAge() const { return age; }
	const char* getName() const { return name; }
public:
	void Print() const
	{
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}
};


class Student : public Person
{
	char subject[20];
	int  number;

public:
	//�ڽ��� �����ڿ����� �θ� ������ ������ڸ� ȣ�������� ��������� ��
	//����, ������ �����ָ� �θ�� ���ھ��� ����Ʈ �����ڸ� ȣ���ϸ鼭 �����ȴ�. 
	Student(const char* _name, int _age, const char* _subj, int _num)
		:Person(_name, _age)	//<=======================================
	{
		strcpy_s(subject, sizeof(subject), _subj);
		number = _num;
	}
public:
	//�ɹ� �Լ� ������(�������̵�(Override))
	//�θ��� �ɹ��Լ��� ���¸�(����Ÿ��,�̸�,�Ű���������Ʈ) �����ϰ� �ڽ��� �����.
	void Print() const
	{
		//�̸�, ���̵� ����ϰ� �ʹ�.
		//1. �θ��� private �ɹ������� ������ ���ִ� getMethod�� ����..
		cout << "�̸� : " << getName() << endl;
		cout << "���� : " << getAge() << endl;
		cout << "�а� : " << subject << endl;
		cout << "�й� : " << number << endl;

		//2. �θ��� private �ɹ������� protected�� ��������. 
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
		cout << "�а� : " << subject << endl;
		cout << "�й� : " << number << endl;

		//3. �θ��� ����Լ��� Ȱ������
		Person::Print();
		cout << "�а� : " << subject << endl;
		cout << "�й� : " << number << endl;
	}

};



int main()
{
	Student stu("ȫ�浿", 20, "��ǻ��", 1111);
	stu.Print();
	return 0;
}