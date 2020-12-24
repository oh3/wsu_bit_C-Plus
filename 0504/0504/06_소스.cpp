/************************************************************
 class
 -> 아래 코드를 객체 중심의 코드로 변경하시오.
*************************************************************/
#include <stdio.h>

struct Rect{
	int left;
	int top;
	int right;
	int bottom;

	int GetArea(Rect r) {
		return (r.right - r.left) * (r.bottom - r.top);
	}

	bool PtInRect(Rect r, int x, int y) {
		if (r.left < x && r.right > x &&
			r.top  < y && r.bottom > y)
			return true;
		return false;
	}

	void print(Rect r) {
		printf("(%d, %d)~(%d, %d)\n", r.left, r.top, r.right, r.bottom);
	}

	void InflateRect(Rect* r, int dx, int dy) {
		r->right += dx;
		r->bottom += dy;
	}

};

void main(){
	Rect r = { 10, 10,20,20 };

	r.InflateRect(&r, 10, 10);
	r.print(r);

	int s = r.GetArea(r);

	if (r.PtInRect(r, 15, 15))
		printf("(15,15) is In r\n");
}
