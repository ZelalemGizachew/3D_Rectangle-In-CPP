#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void Rectangle3DA(int x, int y, int w, int l, int h);
void Rectangle3DB(int x, int y, int w, int l, int h);

int main() {
	
	int x, y, l, w, h;
	
	cout << "Enter the Starting Points. \n X = ";
	cin >> x;
	cout << " Y = ";
	cin >> y;
	cout << "Enter Length, Width and height. \n L = ";
	cin >> l;
	cout << " W = ";
	cin >> w;
	cout << " H = ";
	cin >> h;

	initwindow(1000, 1000);
	Rectangle3DA(x, y, w, l, h);
	Rectangle3DB(x, y, w, l, h);

	getch();
	return 0;
}

void Rectangle3DA(int x, int y, int w, int l, int h) {
	
	int x1 = x, 		y1 = y;
	int x2 = x1 + w, 	y2 = y1 + h;
	int x3 = x1 + l, 	y3 = y1 - l;
	int x4 = x3 + w, 	y4 = y3 + h;
	
	setcolor(GREEN); 
	line(x1, y1, x2, y1);
	line(x1, y1, x1, y2);
	line(x1, y2, x2, y2);
	line(x2, y1, x2, y2);
	
	setcolor(WHITE);
	line(x1, y1, x3, y3);
	line(x2, y1, x4, y3);
	
	line(x1, y2, x3, y4);
	line(x2, y2, x4, y4);
	
	
	setcolor(BLUE);
	line(x3, y3, x4, y3);
	line(x3, y3, x3, y4);
	line(x3, y4, x4, y4);
	line(x4, y4, x4, y3);
}
void Rectangle3DB(int x, int y, int w, int l, int h) {
	
	x*=4;
	
	int x1 = x, 		y1 = y;
	int x2 = x1 + w, 	y2 = y1 + h;
	int x3 = x1 - l, 	y3 = y1 - l;
	int x4 = x3 + w, 	y4 = y3 + h;
	
	setcolor(GREEN); 
	line(x1, y1, x2, y1);
	line(x1, y1, x1, y2);
	line(x1, y2, x2, y2);
	line(x2, y1, x2, y2);
	
	setcolor(WHITE);
	line(x1, y1, x3, y3);
	line(x2, y1, x4, y3);
	
	line(x1, y2, x3, y4);
	line(x2, y2, x4, y4);
	
	
	setcolor(BLUE);
	line(x3, y3, x4, y3);
	line(x3, y3, x3, y4);
	line(x3, y4, x4, y4);
	line(x4, y4, x4, y3);
}

