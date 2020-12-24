//stuManager.cpp

#include "stuManager.h"

stuManager::stuManager()
{

}

//7번
stuManager::~stuManager()
{
    //0번째 인덱스부터 저장된 인덱스까지 순회
    for (int i = 0; i < (int)base.size(); i++)
    {
        //힙메모리에 생성된 객체를 소멸 
        delete base[i];
    }
}

//9번
void stuManager::Run()
{
    int key = 0;
    while ((key = SelectMenu()) != ESC)
    {
        switch (key)
        {
// 9.1번 주석처리 하고 하나씩 기능풀면서 만듬
            case F1: StuInsert();     break;
            case F2: StuRemove();     break;
            case F3: StuSelectNum();  break;
            case F4: StuSelectName(); break;
            case F5: StuUpdate();     break; 
        default: cout << "잘못된 메뉴를 선택하였습니다." << endl;
        }
        wbglbal::pause();
    }
}


keydata stuManager::SelectMenu()
{
    wbglbal::clrscr();
    StuListAll();
    cout << "------------------------------------------------------------------------------------------------" << endl;
    cout << "메뉴 [ESC]:종료" << endl;
    cout << "     [F1]:입력 [F2]:삭제 [F3]:학번 검색(KEY)";
    cout << " [F4]:이름 검색(KEY) [F5]:성적입력(수정)" << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;
    cout << "메뉴를 선택하세요" << endl;
    return wbglbal::getkey();
}

//11번
//전체출력 (한줄에 한 데이터씩)
void stuManager::StuListAll()
{
    //순회알고리즘1(STL의 iterator를 사용한 방식) : 구간
    vector<Student*>::iterator begin = base.begin();    //시작점
    vector<Student*>::iterator end = base.end();        //끝점의 다음위치

    for (int i = 0; begin != end; begin++, i++)
    {
        cout << "[" << i << "]";
        Student* stu = *begin;  //<===============================
        if (stu)                //실제 학생이 보관되었는지 확인
        {
            stu->Print();
        }
    }
}

//12번
//저장
void stuManager::StuInsert()
{
    //[정상흐름]
    //저장정보를 입력받는다.
    //저장객체를 생성한다.(저장정보를 이용해서)
    //저장한다. (저장객체를)

    //[예외흐름 적용]

    int accnumber;
    char name[20];

    accnumber = wbglbal::getnum("학번을 입력하세요.");
    strcpy_s(name, sizeof(name), wbglbal::getstr("이름을 입력하세요"));
    //=================================================================

    Student* stu = new Student(accnumber, name);

    base.push_back(stu);    //acc 저장해 줘~~!!!!

    cout << "저장되었습니다." << endl;
}

//13번
//학번검색
void stuManager::StuSelectNum()
{
    try
    {
        int number = wbglbal::getnum("검색할 학번을 입력하세요");

        CompareByNumber cban(number);
        vector<Student*>::iterator itr = find_if(base.begin(), base.end(), cban);
        if (itr == base.end())
            throw "해당 학번은 존재하지 않습니다.";

        Student* stu = *itr;
        stu->Println();
    }
    catch (const char* msg)
    {
        cout << "[검색에러] " << msg << endl;
    }
}

//16번
//학번으로 검색 후 코드 삭제
void stuManager::StuSelectName()
{
    try
    {
        char name[20];
        strcpy_s(name, sizeof(name), wbglbal::getstr("이름을 입력하세요"));

        CompareByName cban(name);
        vector<Student*>::iterator itr = find_if(base.begin(), base.end(), cban);
        if (itr == base.end())
            throw "해당 학번은 존재하지 않습니다.";

        Student* stu = *itr;
        stu->Println();
    }
    catch (const char* msg)
    {
        cout << "[검색에러] " << msg << endl;
    }
}

//학번으로 검색 후 성적 입력(수정)
void stuManager::StuRemove()
{
    try
    {
        int number;
        number = wbglbal::getnum("삭제할 학번을 입력하세요");

        CompareByNumber cban(number);
        vector<Student*>::iterator itr = find_if(base.begin(), base.end(), cban);
        if (itr == base.end())
            throw "해당 학번은 존재하지 않습니다.";        

        base.erase(itr);            //STL에서 지원되는 삭제함수 

        cout << "삭제되었습니다" << endl;
    }
    catch (const char* msg)
    {
        cout << "[삭제에러] " << msg << endl;
    }
}

//학번으로 검색 후 성적 입력(수정)
void stuManager::StuUpdate()
{
    try
    {
        int number;
        number = wbglbal::getnum("수정할 학번을 입력하세요");

        CompareByNumber cban(number);
        vector<Student*>::iterator itr = find_if(base.begin(), base.end(), cban);
        if (itr == base.end())
            throw "해당 학번은 존재하지 않습니다.";

        Student* stu = *itr;

        int c       = wbglbal::getnum("C언어 점수를 입력하세요");
        int cpp     = wbglbal::getnum("C++언어 점수를 입력하세요");
        int java    = wbglbal::getnum("Java언어 점수를 입력하세요");

        stu->SetJumsu(c, cpp, java);

        cout << "수정되었습니다" << endl;
    }
    catch (const char* msg)
    {
        cout << "[수정에러] " << msg << endl;
    }
}