//Student.h

#pragma once

class Student
{
	//1�� ������������
private:
	const int num;
	char name[20];
	int c;
	int cpp;
	int java;
	float average;

public:
	Student(int _num, const char* _name);

	//15�� (�˻�)
public:
	//15.1��
	int GetNum() const { return num;  }
	const char* GetName() const { return name; }

	//2�� ����Լ� �����
public:
	void Print() const;
	void Println() const;
	void SetJumsu(int _c, int _cpp, int _java);
};

//14��
//�˻�
//find_if�� ���Ǵ� �Լ� ��ü ����
class CompareByNumber	//���� ��� number
{
	int num;
public:
	//���� ���� �����ڸ� ���� ���޹޾� �ɹ������� ����
	CompareByNumber(int _number) : num(_number) {}

	//find_if���� �ݺ������� ȣ��Ǵ� �κ�
	//vector<Account*> �� ������� �ֱ� ������ �̶� ���޵Ǵ� Ÿ����
	bool operator()(Student* value)
	{
		return (value->GetNum() == num);
	}
};

//15��
//find_if�� ���Ǵ� �Լ� ��ü ����
class CompareByName	//���� ��� name
{
	char name[20];
public:
	//���� ���� �����ڸ� ���� ���޹޾� �ɹ������� ����
	CompareByName(const char* _name)
	{
		strcpy_s(name, sizeof(name), _name);
	}

	//find_if���� �ݺ������� ȣ��Ǵ� �κ�
	//vector<Account*> �� ������� �ֱ� ������ �̶� ���޵Ǵ� Ÿ����
	//�Լ���ü.....
	bool operator()(Student* value)
	{
		return (strcmp(value->GetName(), name) == 0);
	}
};



