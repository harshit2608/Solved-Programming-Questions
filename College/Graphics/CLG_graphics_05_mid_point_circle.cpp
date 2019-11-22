#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main()
{
int gd = DETECT, gm;
int i, r, x, y ,xc, yc;
float d;
clrscr();
initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
cout<<"Enter the radius: ";
cin>>r;
cout<<"Enter the radius of the circle: ";
cin>>xc>>yc;
d = 1.25 - r;
x = 0;
y = r;
do{
if(d < 0)
{
x = x + 1;
d = d + 2*x + 1;
}
else{
x = x + 1;
y = y - 1;
d = d + 2*x+1 - 2*y;
}
putpixel(xc + x, yc - y, 1);
putpixel(xc - x, yc - y, 2);
putpixel(xc + x, yc + y, 3);
putpixel(xc - x, yc + y, 4);
putpixel(xc + y, yc - x, 5);
putpixel(xc - y, yc - x, 6);
putpixel(xc + y, yc + x, 7);
putpixel(xc - y, yc + x, 8);
}while(x<y);
getch();
closegraph;
}