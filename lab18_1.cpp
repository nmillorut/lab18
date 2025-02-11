#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *a,Rect *b){
	double xw = max(0.0,min(a->x+a->w,b->x+b->w)-max(a->x,b->x));
	double yh = max(0.0,min(a->y,b->y)-max(a->y-a->h,b->y-b->h));
	if (xw<=0 || yh<=0) { return 0;}
	else{return xw*yh;}
}
int main(){
	Rect R1 = {-1,2,6.9,9.6};
	Rect R2 = {0,0,1.2,2.5};
	cout << overlap(&R1,&R2);
}