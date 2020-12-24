//accmanager.cpp

#include "accmanager.h"

accManager::accManager()
{
}

accManager::~accManager()
{
    //vector�� ����� ���� ��ȯ�ϴ� �Լ� 
    //base.size();
    //��ȸ�˰���1(�������� ���)
    for (int i = 0; i < (int)base.size(); i++)
    {
        delete base[i];
    }
}

void accManager::Run()
{
    int key = 0;
    while ((key = SelectMenu()) != ESC)
    {
        switch (key)
        {
            case F1: AddAccount();          break;
            case F2: RemoveAccount();       break;
            case F3: SearchAccountByNum();  break;
            case F4: SearchAccountByName(); break;
            case F5: UpdateInputAccount();  break;
            case F6: UpdateOutputAccount(); break;
            default: cout << "�߸��� �޴��� �����Ͽ����ϴ�." << endl;
        }
        wbglbal::pause();
    }
}

keydata accManager::SelectMenu()
{
    wbglbal::clrscr();
    ListAll();
    cout << "-----------------------------------------" << endl;
    cout << "�޴� [ESC]:����" << endl;
    cout << "[F1]:���� �߰� [F2]:���� ���� [F3]:���¹�ȣ�� �˻�(KEY)" << endl;
    cout << " [F4]:�������� �˻�(�ټ�) [F5]:�Ա� [F6]:���" << endl;
    cout << "�޴��� �����ϼ���" << endl;
    return wbglbal::getkey();
}

//==========================================================
void accManager::ListAll()
{
    //��ȸ�˰���1(STL�� iterator�� ����� ���) : ����
    vector<Account*>::iterator begin = base.begin();    //������
    vector<Account*>::iterator end = base.end();        //������ ������ġ

    for (int i=0; begin != end; begin++, i++ )
    {
        cout << "[" << i << "]";
        Account* acc = *begin;  //<===============================
        if (acc)                //���� �л��� �����Ǿ����� Ȯ��
        {
            cout << acc;        //��¿�����������
        }
        cout << endl;
    }
}

void accManager::AddAccount()
{
    //[�����帧]
    //���������� �Է¹޴´�.
    //���尴ü�� �����Ѵ�.(���������� �̿��ؼ�)
    //�����Ѵ�. (���尴ü��)

    //[�����帧 ����]

    int accnumber;
    char name[20];

    accnumber = wbglbal::getnum("�߰��� ���� ��ȣ�� �Է��ϼ���.");
    strcpy_s(name, sizeof(name), wbglbal::getstr("�̸��� �Է��ϼ���"));
    //=================================================================

    Account* acc = new Account(accnumber, name);

    base.push_back(acc);    //acc ������ ��~~!!!!

    cout << "����Ǿ����ϴ�." << endl;    
}

//���� ���� �˻� �Լ��� Ȱ���Ͽ� ���� ���� ����
void accManager::RemoveAccount()
{
    try
    {
        int accnumber;
        accnumber = wbglbal::getnum("������ ���� ��ȣ�� �Է��ϼ���");

        int idx = NumberToIdx(accnumber);   //���� ���� �˻��Լ� ȣ��

        vector<Account*>::iterator cur = base.begin();
        cur = cur + idx;
        base.erase(cur);            //STL���� �����Ǵ� �����Լ� 
        //delete base[idx];       //����??????

        cout << "�����Ǿ����ϴ�" << endl; 
    }
    catch (const char* msg)
    {
        cout << "[��������] " << msg << endl; 
    }   
}

//���� �˻�
void accManager::SearchAccountByNum()
{
    try
    {
        int accnumber = 0;
        accnumber = wbglbal::getnum("�˻��� ���� ��ȣ�� �Է��ϼ���");

        int idx = NumberToIdx(accnumber);   //���� ���� �˻��Լ� ȣ��

        Account* acc = base[idx];
        cout << acc << endl;
    }
    catch (const char* msg)
    {
        cout << "[�˻�����] " << msg << endl;
    }
}

//find_if�Լ� Ȱ��
void accManager::SearchAccountByNum1()
{
    try
    {
        int accnumber = 0;
        accnumber = wbglbal::getnum("�˻��� ���� ��ȣ�� �Է��ϼ���");

        CompareByAccNumber cban(accnumber);
        vector<Account*>::iterator itr = find_if(base.begin(), base.end(), cban);

        Account* acc = *itr;
        cout << acc << endl;
    }
    catch (const char* msg)
    {
        cout << "[�˻�����] " << msg << endl;
    }
}

void accManager::SearchAccountByName()
{
    char name[20];
    strcpy_s(name, sizeof(name), wbglbal::getstr("�˻��� ���� �� �̸��� �Է��ϼ���"));

    for (int i = 0; i < (int)base.size(); i++)
    {
        Account* acc = base[i];
        if (strcmp(acc->GetName(), name) == 0)
        {
                cout << base[i] << endl;                
        }
    }    
}

//find_if�Լ� Ȱ��
void accManager::SearchAccountByName1()
{
    char name[20];
    strcpy_s(name, sizeof(name), wbglbal::getstr("�˻��� ���� �� �̸��� �Է��ϼ���"));

    CompareByAccName cban(name);
    vector<Account*>::iterator itr = find_if(base.begin(), base.end(), cban);
    if (itr == base.end())
    {
        cout << "����" << endl; 
        return;
    }
    Account* acc = *itr;
    cout << acc << endl;
}

void accManager::UpdateInputAccount()
{
    try
    {
        int accnumber = 0;
        accnumber = wbglbal::getnum("�Ա��� ���� ��ȣ�� �Է��ϼ���");

        //�˻���� ��û 
        int idx = NumberToIdx(accnumber);   //<==  throw

        //�Ա� �Է� ó��
        Account* acc = base[idx];
        int money = wbglbal::getnum("�Աݾ�");
        acc->InputMoney(money);                 //<== throw
        cout << "�ԱݵǾ����ϴ�" << endl;
    }
    catch (const char* msg)
    {
        cout << msg << endl; 
    }
}

void accManager::UpdateOutputAccount()
{
    try
    {
        int accnumber = 0;
        accnumber = wbglbal::getnum("����� ���� ��ȣ�� �Է��ϼ���");

        //�˻���� ��û 
        int idx = NumberToIdx(accnumber);   //<==  throw

        //��� �Է� ó��
        Account* acc = base[idx];
        int money = wbglbal::getnum("��ݾ�");
        acc->OutputMoney(money);                 //<== throw
        cout << "��ݵǾ����ϴ�" << endl;
    }
    catch (const char* msg)
    {
        cout << msg << endl;
    }
}

int  accManager::NumberToIdx(int accnumber)
{
    //��ȸ
    for (int i = 0; i < (int)base.size(); i++)
    {
        Account* acc = base[i];
        if (acc->GetNumber() == accnumber)
        {
            return i;
        }
    }
    throw "�ش� ���¹�ȣ�� �������� �ʽ��ϴ�.";
}