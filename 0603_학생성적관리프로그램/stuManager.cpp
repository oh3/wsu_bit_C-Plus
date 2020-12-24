//stuManager.cpp

#include "stuManager.h"

stuManager::stuManager()
{

}

//7��
stuManager::~stuManager()
{
    //0��° �ε������� ����� �ε������� ��ȸ
    for (int i = 0; i < (int)base.size(); i++)
    {
        //���޸𸮿� ������ ��ü�� �Ҹ� 
        delete base[i];
    }
}

//9��
void stuManager::Run()
{
    int key = 0;
    while ((key = SelectMenu()) != ESC)
    {
        switch (key)
        {
// 9.1�� �ּ�ó�� �ϰ� �ϳ��� ���Ǯ�鼭 ����
            case F1: StuInsert();     break;
            case F2: StuRemove();     break;
            case F3: StuSelectNum();  break;
            case F4: StuSelectName(); break;
            case F5: StuUpdate();     break; 
        default: cout << "�߸��� �޴��� �����Ͽ����ϴ�." << endl;
        }
        wbglbal::pause();
    }
}


keydata stuManager::SelectMenu()
{
    wbglbal::clrscr();
    StuListAll();
    cout << "------------------------------------------------------------------------------------------------" << endl;
    cout << "�޴� [ESC]:����" << endl;
    cout << "     [F1]:�Է� [F2]:���� [F3]:�й� �˻�(KEY)";
    cout << " [F4]:�̸� �˻�(KEY) [F5]:�����Է�(����)" << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;
    cout << "�޴��� �����ϼ���" << endl;
    return wbglbal::getkey();
}

//11��
//��ü��� (���ٿ� �� �����;�)
void stuManager::StuListAll()
{
    //��ȸ�˰���1(STL�� iterator�� ����� ���) : ����
    vector<Student*>::iterator begin = base.begin();    //������
    vector<Student*>::iterator end = base.end();        //������ ������ġ

    for (int i = 0; begin != end; begin++, i++)
    {
        cout << "[" << i << "]";
        Student* stu = *begin;  //<===============================
        if (stu)                //���� �л��� �����Ǿ����� Ȯ��
        {
            stu->Print();
        }
    }
}

//12��
//����
void stuManager::StuInsert()
{
    //[�����帧]
    //���������� �Է¹޴´�.
    //���尴ü�� �����Ѵ�.(���������� �̿��ؼ�)
    //�����Ѵ�. (���尴ü��)

    //[�����帧 ����]

    int accnumber;
    char name[20];

    accnumber = wbglbal::getnum("�й��� �Է��ϼ���.");
    strcpy_s(name, sizeof(name), wbglbal::getstr("�̸��� �Է��ϼ���"));
    //=================================================================

    Student* stu = new Student(accnumber, name);

    base.push_back(stu);    //acc ������ ��~~!!!!

    cout << "����Ǿ����ϴ�." << endl;
}

//13��
//�й��˻�
void stuManager::StuSelectNum()
{
    try
    {
        int number = wbglbal::getnum("�˻��� �й��� �Է��ϼ���");

        CompareByNumber cban(number);
        vector<Student*>::iterator itr = find_if(base.begin(), base.end(), cban);
        if (itr == base.end())
            throw "�ش� �й��� �������� �ʽ��ϴ�.";

        Student* stu = *itr;
        stu->Println();
    }
    catch (const char* msg)
    {
        cout << "[�˻�����] " << msg << endl;
    }
}

//16��
//�й����� �˻� �� �ڵ� ����
void stuManager::StuSelectName()
{
    try
    {
        char name[20];
        strcpy_s(name, sizeof(name), wbglbal::getstr("�̸��� �Է��ϼ���"));

        CompareByName cban(name);
        vector<Student*>::iterator itr = find_if(base.begin(), base.end(), cban);
        if (itr == base.end())
            throw "�ش� �й��� �������� �ʽ��ϴ�.";

        Student* stu = *itr;
        stu->Println();
    }
    catch (const char* msg)
    {
        cout << "[�˻�����] " << msg << endl;
    }
}

//�й����� �˻� �� ���� �Է�(����)
void stuManager::StuRemove()
{
    try
    {
        int number;
        number = wbglbal::getnum("������ �й��� �Է��ϼ���");

        CompareByNumber cban(number);
        vector<Student*>::iterator itr = find_if(base.begin(), base.end(), cban);
        if (itr == base.end())
            throw "�ش� �й��� �������� �ʽ��ϴ�.";        

        base.erase(itr);            //STL���� �����Ǵ� �����Լ� 

        cout << "�����Ǿ����ϴ�" << endl;
    }
    catch (const char* msg)
    {
        cout << "[��������] " << msg << endl;
    }
}

//�й����� �˻� �� ���� �Է�(����)
void stuManager::StuUpdate()
{
    try
    {
        int number;
        number = wbglbal::getnum("������ �й��� �Է��ϼ���");

        CompareByNumber cban(number);
        vector<Student*>::iterator itr = find_if(base.begin(), base.end(), cban);
        if (itr == base.end())
            throw "�ش� �й��� �������� �ʽ��ϴ�.";

        Student* stu = *itr;

        int c       = wbglbal::getnum("C��� ������ �Է��ϼ���");
        int cpp     = wbglbal::getnum("C++��� ������ �Է��ϼ���");
        int java    = wbglbal::getnum("Java��� ������ �Է��ϼ���");

        stu->SetJumsu(c, cpp, java);

        cout << "�����Ǿ����ϴ�" << endl;
    }
    catch (const char* msg)
    {
        cout << "[��������] " << msg << endl;
    }
}