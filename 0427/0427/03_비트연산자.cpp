//03_비트연산자 : c와 100% 동일한 문법

/*
데이터 사용 단위 : byte
저장의 최소 단위 : bit
1byte = 8bit 
문자는 1byte의 크기로 구성된다. == 문자는 8bit의크기로 구성된다.
================================================
bit
- 0과 1만을 저장할 수 있는 저장의 최소 단위
ex) 1bit(2개:2의 1승) : 0 , 1 
	 2bit(4개: 2의 2승) : 00 , 01 , 10 , 11
	 3bit(8개: 2의 3승 : 000, 001, 010, 100, 101, 110, 111
	 4bit(16개: 2의 4승) : 0000 -> 1111 까지

- bit는 2진수 관점에서 이해
================================================
2진수와 10진수의 표기법 변환 연산

2진수 => 10진수

10진수 => 2진수
================================================
비트연산자 (  &, |, ~ , ^, <<, >> )
-알고리즘: 비트켜기, 비트끄기, 비트마스크

*/

#include <iostream>
using namespace std;

void exam1();
void exam2();

int main() {

	//비트연산자
	//exam1();
	exam2();

	return 0;

}

void exam1() {

	// int를 1byte만 표현
	int num1 = 7;
	int num2 = 4;

	int result;
				
	//AND
	result = num1 & num2;		// num1 : 0000 0111
											// num2 : 0000 0100
											//       & : 0000 0100 => 4
	cout << result << endl;

	//OR
	result = num1 | num2;		// num1 : 0000 0111
											// num2 : 0000 0100
											//       & : 0000 0111 => 7
	cout << result << endl;

	//반전연산
	//1의 보수연산(마이너스로 변환 연산) : 자신의 값이 음스로 변경되고,
	//													  값은 원래의 값보다 1증가
	result = -num1;					// num1 : 0000 0111
											//		-  : 1111 1000
	cout << result << endl;		// -8
											

	result = -num2;
	cout << result << endl;		// -5

	//2의 보수 연산
	result = -num1 + 1;			// num : 7
	cout << result << endl;	//	num -7

	//반전연산은 그냥 자기 비트 값을 반전시킨다 라고 이해.

	//XOR연산
	//양쪽 값이 다를때 참인 연산
	result = num1 ^ num2;		    // num1 : 0000 0111
											// num2 : 0000 0100
											//    ^    : 0000 0011 ==> 3
	
	cout << result << endl;

	//비트이동
	result = num1 << 3; //비트시프트연산자 ( 3칸 왼쪽으로 이동해라)
								// num1 = 0000 0111
								// <<3   = 0001 1100
								// 2의3승의 곱 7 * 2의 3 = 56

	cout << result << endl;
}						

//비트활용연산 : 비트켜기 ( | ), 비트끄기 ( &~), 비트마스크( & )
//8명의 출결정보를 int attend 변수에 저장
//int type 8bit로 가정
void exam2() {

	int attend = 0;		//0000 0000

	//출석체크 ( 0 -> 1) : 비트켜기

	//2번 학생 출석
	attend = attend | 4;		//attend : 0000 0000
	//5번 학생 출석			//		  4 : 0000 0100				
									//		 |  : 0000 0100
	attend = attend | 32;  //attend : 0000 0100
								   //      32 : 0010 0000
								   //      |   : 0010 0100 

	//2번 학생이 출석했나? : 특정 비트 값이 1인가? : 비트마스크

	int result = attend & 4;		// attend : 0010 0100
										//     4    : 0000 0100
										//     &    : 0000 0100
	//3번 학생이 출석했나?
	result = attend & 8;			// attend : 0010 0100
										//     8    : 0000 1000
										//    &     : 0000 0000

	//비트끄기
	//2번학생이 결석했는데 실수로 출석처리(1 -> 0 변경) : 비트 끄기연산이 필요

	attend = attend & ~4;		// attend : 0010 0100
										//	   4     : 0000 0100
										//     ~    : 1111 1011
										//     &    : 0010 0000

}
