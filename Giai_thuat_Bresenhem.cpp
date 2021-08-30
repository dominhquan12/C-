#include<iostream>
#include<stdio.h>
#include<dos.h>
#include<conio.h>
#include<graphics.h>
#include <stdlib.h>
#include<math.h>
#include<alloc.h>
#define RADS 0.017453293

using namespace std;
struct point{
	int x, y, z;
};
	a[4] = {
		{110, 180, 80},
		{10, 200, 80},
		{120, 50, 80},
		{110, 180, 250}
	};
int noi[4][4];
void Bresenhem_Line(int x1, int y1, int x2, int y2, int c){
	if(x1 == x2){
		int i;
		if(y1 < y2){
			for(int i = y1; i <= y2; i++){
				putpixel(x1, i, c);
			}
		}
		else{
			for(i = y2; i <= y1; i++){
				putpixel(x1, i , c);
			}
		}
	}
	if(y1 == y2){
		int i;
		if(x1 < x2){
			for(int i = x1; i <= x2; i++){
				putpixel(i, y1, c);
				delay(10);
			}
		}
		else{
			for(i = x2; i <= x1; i++){
				putpixel(i, y1 , c);
				delay(10);
			}
		}
	}
	if(x1 < x2){
		if(y1 < y2){
			if( (y2 - y1)/(x2 - x1) < 1 ){
				int i;
				int Dx = x2 - x1;
				int Dy = y2 - y1;
				int p = 2*Dy - Dx;
				putpixel(x1, y1, c);
				for(i = x1; i < x2; i++){
					if(p < 0){
						p += 2*Dy;
					}
					else{
						p += 2*(Dy - Dx);
						y1++;
					}
					x1++;
					putpixel(x1, y1, c);
					delay(10);
				}
			}
			else{
				int i;
				int Dx = x2 - x1;
				int Dy = y2 - y1;
				int p = 2*Dx - Dy;
				putpixel(x1, y1, c);
				for(i = y1; i < y2; i++){
					if(p < 0){
						p += 2*Dx;
					}
					else{
						p += 2*(Dx - Dy);
						x1++;
					}
					y1++;
					putpixel(x1, y1, c);
					delay(10);
				}
			}
		}
		if(y1 > y2){
			if( (y2 - y1)/(x2 - x1) > -1 ){
				int i;
				int Dx = x2 - x1;
				int Dy = y2 - y1;
				int p = 2*Dy + Dx;
				putpixel(x1, y1, c);
				for(i = x1; i <= x2; i++){
					if(p > 0){
						p += 2*Dy;
					}
					else{
						p += 2*(Dy + Dx);
						y1--;
					}
					x1++;
					putpixel(x1, y1, c);
					delay(10);
				}
			}
			else{
				int i;
				int Dx = x2 - x1;
				int Dy = y2 - y1;
				int p = 2*Dx + Dy;
				putpixel(x1, y1, c);
				for(i = y1; i >= y2; i--){
					if(p < 0){
						p += 2*Dx;
					}
					else{
						p += 2*(Dx + Dy);
						x1++;
					}
					y1--;
					putpixel(x1, y1, c);
					delay(10);
				}
			}
		}
	}
	if(x1 > x2){
		if(y1 < y2){
			if( (y2 - y1)/(x2 - x1) > -1 ){
				int i;
				int Dx = x2 - x1;
				int Dy = y2 - y1;
				int p = -2*Dy - Dx;
				putpixel(x1, y1, c);
				for(i = x1; i > x2; i--){
					if(p < 0){
						p = p - 2*Dy - 2*Dx;
						y1++;
					}
					else{
						p = p - 2*Dy;
					}
					x1--;
					putpixel(x1, y1, c);
					delay(10);
				}
			}
			else{
				int i;
				int Dx = x2 - x1;
				int Dy = y2 - y1;
				int p = -2*Dx - Dy;
				putpixel(x1, y1, c);
				for(i = y1; i < y2; i++){
					if(p < 0){
						p -= 2*Dx;
					}
					else{
						p -= 2*(Dx + Dy);
						x1--;
					}
					y1++;
					putpixel(x1, y1, c);
					delay(10);
				}
			}
		}
		if(y1 > y2){
			if( (y2 - y1)/(x2 - x1) < 1 ){
				int i;
				int Dx = x2 - x1;
				int Dy = y2 - y1;
				int p = 2*Dy - Dx;
				putpixel(x1, y1, c);
				for(i = x1; i > x2; i--){
					if(p > 0){
						p = p - 2*Dy + 2*Dx;
						y1--;
					}
					else{
						p -= 2*Dy;
					}
					x1--;
					putpixel(x1, y1, c);
					delay(10);
				}
			}
			else{
				int i;
				int Dx = x2 - x1;
				int Dy = y2 - y1;
				int p = 2*Dx + Dy;
				putpixel(x1, y1, c);
				for(i = y1; i > y2; i--){
					if(p < 0){
						p = p - 2*Dx + 2*Dy;
						x1--;
					}
					else{
						p = -2*Dx;
					}
					y1--;
					putpixel(x1, y1, c);
					delay(10);
				}
			}
		}
	}
}
void Dothi(){
	Bresenhem_Line(getmaxx()/2, getmaxy()/2, getmaxx() - 10, getmaxy()/2, 15);
	Bresenhem_Line(getmaxx()/2, getmaxx()/2, getmaxy()/2, 15);
	Bresenhem_Line(getmaxx()/2, getmaxy()/2, getmaxx() - 170, getmaxy()/2 + 170, 15);
	Bresenhem_Line(getmaxx()/2 - 170, getmaxy()/2 + 170, getmaxx()/2 - 170, getmaxy()/2 + 166, 15);
	Bresenhem_Line(getmaxx()/2 - 170, getmaxy()/2 + 170, getmaxx() - 163, getmaxy()/2 + 167, 15);
	settextjustify(CENTER_TEXT, CENTER_TEXT);
	outtextxy(getmaxx() - 9, getmaxy()/2 + 1, "C");
	outtextxy(getmaxx() - 9, getmaxy()/2 + 10, "y");
	outtextxy(getmaxx()/2, 10, "-");
	outtextxy(getmaxx()/2 - 10, 10, "z");
	outtextxy(getmaxx()/2 - 155, getmaxy()/2 + 170, "x");	
}
point Diem3d(int x, int y, int z){
	point p;
	if(x >= 0 && y >= 0 && z >= 0){
		p.x = int(getmaxx()/2 + y - x*cos(RADS*45));
		p.y = int(getmaxy()/2 - z + x*cos(RADS*45));
	}
	if(x < 0 && y >= 0 && z >= 0){
		p.x = int(getmaxx()/2 + y - x*cos(RADS*45));
		p.y = int(getmaxy()/2 - z + x*cos(RADS*45));
	}
	if(x >= 0 && y < 0 && z >= 0){
		p.x = int(getmaxx()/2 + y - x*cos(RADS*45));
		p.y = int(getmaxy()/2 - (z - x*cos(RADS*45)));
	}
	if(x < 0 && y >= 0 && z < 0){
		p.x = int(getmaxx()/2 + y - x*cos(RADS*45));
		p.y = int(getmaxy()/2 - z + x*cos(RADS*45));
	}
	if(x < 0 && y >= 0 && z < 0){
		p.x = int(y + getmaxx()/2 - x*cos(RADS*45));
		p.y = int(getmaxy()/2 + (- z - x*cos(RADS*45)));
	}
	if(x >= 0 && y < 0 && z < 0){
		p.x = int(getmaxx()/2 + y - x*cos(RADS*45));
		p.y = int(getmaxy()/2 + -z + x*cos(RADS*45));
	}
	if(x < 0 && y < 0 && z >= 0){
		p.x = int(getmaxx()/2 - (-y + x*cos(RADS*45)));
		p.y = int(getmaxy()/2 - (-z - x*cos(RADS*45)));
	}
	if(x < 0 && y < 0 && z < 0){
		p.x = int(getmaxx()/2 + y - x*cos(RADS*45));
		p.y = int(getmaxx()/2 - z + x*cos(RADS*45));
	}
	return p;
}
point hinhchieu(int &x, int &y, int &z, int chieu){
	point p;
	if(chieu == 1){
		p.x = int (getmaxx()/2 + y - x*cos(RADS*45));
		p.y = int (getmaxy()/2 + x*cos(RADS*45));
	}
	if(chieu == 2){
		p.x = int (getmaxx()/2 + y - x*cos(RADS*45));
		p.y = int (getmaxy()/2 - z + x*cos(RADS*45));
	}
	if(chieu == 3){
		p.x = int (getmaxx()/2 + y - x*cos(RADS*45) + xsin(RADS*45));
		p.y = int (getmaxy()/2 - z);
	}
	return p;
}
point quay(int &x, int &y, int &z, int goc, int chieu){
	point p;
	if(chieu == 1){
		p.x = xcos(RADS*goc) + zsin(RADS*goc);
		p.y = y;
		p.z = -xsin(RADS*goc) + zcos(RADS*goc);
	}
	if(chieu == 2){
		p.x = x;
		p.y = ycos(RADS*goc) - zsin(RADS*goc);
		p.z = ysin(RADS*goc) + zcos(RADS*goc);
	}
	if(chieu == 3){
		p.x = xcos(RADS*goc) + ysin(RADS*goc);
		p.y = xsin(RADS*goc) + ycos(RADS*goc);
		p.z = z;
	}
	return p;
}
void chieumat(point k[], int t, int m){
	int i, j = 0;
	int a[4][4];
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			n[i][j] = 1;
			n[j][i] = 1;
		}
	}
	for(i = 0; i < 4; i++){
		k[i] = hinhchieu(k[i].x, k[i].y, k[i].z, t);
	}
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			if(i != j && n[i][j] == 1 && n[j][i] == 1){
				Bresenhem_Line(k[i].x, k[i].y, k[j].x, k[j].y, m);
				n[i][j] = 1;
				n[j][i] = 1;
			}
		}
	}
}
int main(){
	point p[4], c[4], l[4];
	int j = 0;
	int goc[2] = {45, 35};
	int drive = DETECT, mode;
	initgraph(&driver, &mode, "c:\\tc\\bgi");
	Dothi();
	for(int i = 0; i < 4; i++){
		b[i] = Diem3d(a[i].x, a[i].y, a[i].z);
	}
	for(int i = 0; i < 4; i++){
		Bresenhem_Line(b[j].x, b[j].y, b[i].x, b[i].y, 10);
	}
	Bresenhem_Line(b[1].x, b[1].y, b[2].x, b[2].y, 10);
	Bresenhem_Line(b[1].x, b[1].y, b[3].x, b[3].y, 10);
	Bresenhem_Line(b[2].x, b[2].y, b[3].x, b[3].y, 10);
	settextjustify(LEFT_TEXT, RIGHT_TEXT);
	cout << "quay quanh truc Oy goc 45";
	cout << "quay quanh truc Ox goc 35.5";
	for(int i = 0; i < 4; i++){
		c[i] = quay(a[i].x, a[i].y, a[i].z, goc[1], 1);
	}
	for(int i = 0; i < 4; i++){
		c[i] = quay(c[i].x, c[i].y, c[i].z, goc[2], 2);
	}
	for(int i = 0; i < 4; i++){
		l[i] = c[i];
	}
	for(int i = 0; i < 4; i++){
		c[i] = Diem3d(c[i].x, c[i].y, c[i].z);
	}
	outtextxy(10, 110, "Chon mat chieu: ");
	outtextxy(10, 120, "Oxy: bam so 1");
	outtextxy(10, 130, "Oxz: bam so 2");
	outtextxy(10, 140, "Oyz: bam so 3");
	outtextxy(10, 150, "Bam so 4 ket thuc");
	char m;
	do{
		m = getch();
		for(int i = 0; i < 4; i++){
			c[i] = l[i];
		}
		switch(m){
			case '1':{
				chieumat(c, 1, 5);
				break;
			}
			case '2':{
				chieumat(c, 2, 7);
				break;
			}
			case '3':{
				chieumat(c, 3, 9);
				break;
			}
		}
	}while(m != '4');
	closegraph();
	return 0;
}

