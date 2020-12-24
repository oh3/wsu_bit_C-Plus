//09_구조체 : 타입 사용의 편리성 제공(개선된 문법)
#include <iostream>
using namespace std;

struct tagdata{

};

typedef struct tagdata {

}data1;

int main() {

	//C언어라면
	struct tagdata d1;
	data1 d2;

	//C++에서는 더 이상 sturct 키워드를 타입명에 사용 안해도됨.
	tagdata d3;
	tagdata d4;

	return 0;
}