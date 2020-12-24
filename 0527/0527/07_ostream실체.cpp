//07_ostream 실체(C++코드는 내부적으로 C함수를 사용)
#include <stdio.h>

namespace mystd
{
	class myostream
	{
	public:
		myostream& operator<<(int value)
		{
			printf("%d", value);
			return *this;
		}
		myostream& operator<<(const char* value)
		{
			printf("%s", value);
			return *this;
		}
		myostream& operator<<(double value)
		{
			printf("%f", value);
			return *this;
		}
	};

	myostream mycout;
}
//=========================================================

using namespace mystd;

int main()
{
	mycout << 10 << "," << 10.1;

	return 0;
}