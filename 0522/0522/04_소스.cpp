/*
  04. �Ʒ� �ڵ尡 ����� �� �ִ� Ŭ���� ����
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
          ar[i]->Draw();	// �ش� �������� ��� ex) "Line" or "Circle" or "Rect"
     }

     for (i=0;i<10;i++) {
          delete ar[i];
     }
}