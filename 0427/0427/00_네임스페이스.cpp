#include <iostream>
using namespace std;

namespace aaa
{
	void foo() { cout << "aaa::foo()" << endl; }
}

void foo() { cout << "foo()" << endl; }

int main()
{
	aaa::foo();

	foo();

	return 0;
}