/************************************************************
 namespace
//구문을 추가하여 아래 코드가 실행되도록 할것
//힌트 : sam::goo() 코드를 참고할 것
*************************************************************/

#include <iostream>
using namespace std;

void foo() {
	cout << "foo();" << endl;
}

namespace sam {

	void goo() {
		cout << " sam::goo()" << endl;
	}

	void foo() {
		cout << "foo();" << endl;
	}
}


namespace one {
	void foo() {
		cout << "foo();" << endl;
	}
}

namespace two {
	void foo() {
		cout << "foo();" << endl;
	}
}


int main(){
		foo();			// global foo()
		sam::goo();		//sam::goo()
		one::foo();		// one::foo()
		two::foo();		// two::foo()

		return 0;
}