/*
  04. 아래 코드가 실행될 수 있는 클래스 구현
      class Graphic
      class Line : public Graphic
      class Circle : public Graphic
      class Rect : public Graphic
*/
#include <iostream>
using namespace std;


void main(){
     Graphic *ar[10]={
          new Graphic(),new Rect(),new Circle(),new Rect(),new Line(),
          new Line(),new Rect(),new Line(),new Graphic(),new Circle() };

     int i;

     for (i=0;i<10;i++) {
          ar[i]->Draw();	// 해당 도형명을 출력 ex) "Line" or "Circle" or "Rect"
     }

     for (i=0;i<10;i++) {
          delete ar[i];
     }
}