//06_��¿�����������
#include <iostream>
using namespace std;

class Stu
{
    const int num;
    char name[20];
public:
    Stu(int _num, const char* _name) : num(_num)
    {
        strcpy_s(name, sizeof(name), _name);
    }

    void Print() const
    {
        cout << num << ", " << name << endl;
    }

    //�ܺο� ģ���� ���� �� �ִ�.(���� ���� ������ �ƴϴ�)
    //ģ���� ������ �ڽ���(Stu) private �ɹ��� ������ ����Ѵ�.
    friend ostream& operator<<(ostream& os, const Stu& stu);
};

//�����Լ�
ostream& operator<<(ostream& os, const Stu& stu)
{
    os << stu.num << "," << stu.name;
    return os;
}

int main()
{
    Stu stu(10, "ȫ�浿");
    stu.Print();

    //������ �����Ǹ� cout��ü�� ���� Ŭ�������ο� �ؾ� �Ѵ�.
    cout << stu << endl;
    //�ɹ��Լ����� : cout.operator<<(stu);
    //�����Լ����� : operator<<(cout, stu);  

    return 0;
}