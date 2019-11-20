#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void main()
{
int gd = DETECT, gm;
int x,y,p,r,xc = 320, yc = 240;
initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
cout<<"Enter the radius: ";
cin>>r;
x = 0;
y = r;
putpixel(xc + x, yc - y, 1);
p = 3 - (2*r);
for(x = 0; x<=y; x++)
{
if(p<0)
{
y = y;
p = (p+(4*x) + i);
}
else{
y = y - 1;
p = p + (4*(x-y) + 10);
}
putpixel(xc + x, yc - y, 1);
putpixel(xc - x, yc - y, 2);
putpixel(xc + x, yc + y, 3);
putpixel(xc - x, yc + y, 4);
putpixel(xc + y, yc - x, 5);
putpixel(xc - y, yc - x, 6);
putpixel(xc + y, yc + x, 7);
putpixel(xc - y, yc + x, 8);
}
getch();
closegraph;
}