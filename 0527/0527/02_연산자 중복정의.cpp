//02_�������ߺ�����

/*
���׿�����( ��� : + , - , * , / ,  �� : ==...)

*/
#include <iostream>
using namespace std;

class MyDate {
public:
	int year;
	int month;
	int day;

public:
	MyDate(int y, int m, int d)
		:year(y), month(m), day(d)
	{
	}

public:
	void Print() const{
		cout.width(4);
		cout.fill('0');
		cout << year << "-";

		cout.width(2);
		cout.fill('0');
		cout << month << "-";

		cout.width(2);
		cout.fill('0');
		cout << day << endl;
	}
public:
	bool Equal(const MyDate& d) {	//���޵� ��ü�� ���� ���.
		if (year == d.year && month == d.month && day == d.day)
			return true;
		else
			return false;
	}
	bool operator==(const MyDate& d) {
		if (year == d.year && month == d.month && day == d.day)
			return true;
		else
			return false;
	}
public:
	MyDate operator+(int d)
	{
		MyDate temp(year, month, day + d);
		return temp;
	}
};



int main(){
	
	MyDate d1(2020, 5, 7), d2(2020, 5, 7);
	d1.Print();
	d2.Print();

	//�� ��ü�� ��¥�� �������� Ȯ��
//	bool b1 = d1.Equal(d2);
	if (d1 == d2)					// d1.operator == (d2)
		cout << "����" << endl;
	else
		cout << "�ٸ���" << endl;

	//������� : int num = 10 + 2; 
	MyDate d3 = d1 + 2;			// d1.operator+(2);
	d3.Print();

	return 0;


}