#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
int x1, y1, x2, y2, x3, y3, mx, my;
void draw();
void scale();
void main()
{
int gd = DETECT, gm;
int c;
initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
cout<<"Enter the first point of Triangle: ";
cin>>x1>>y1;
cout<<"Enter the Second point of Triangle: ";
cin>>x2>>y2;
cout<<"Enter the Third point of Triangle: ";
cin>>x3>>y3;
draw();
scale();
}
void draw()
{
line(x1, y1, x2, y2);
line(x2, y2, x3, y3);
line(x3, y3, x1, y1);
}
void scale()
{
int x, y, a1, a2, a3, b1, b2, b3;
cout<<"Enter the Scaling coordinate: ";
cin>>x>>y;
mx = (x1 + x2 + x3)/3;
my = (y1 + y2 + y3)/3;
clrscr();
a1 = mx + (x1 - mx)*x;
b1 = my + (y1 - my)*y;
a2 = mx + (x2 - mx)*x;
b2 = my + (y2 - my)*y;
a3 = mx + (x3 - mx)*x;
b3 = my + (y3 - my)*y;
line(a1,b1,a2,b2);
line(a2,b2,a3,b3);
line(a3,b3,a1,b1);
draw();
getch();
}