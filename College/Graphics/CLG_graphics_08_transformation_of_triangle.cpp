#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void shearx()
{
int x1 = 100, y1 = 100, x2 = 100, y2 = 30, x3 = 120, y3 = 30, x4 = 170, y4 = 100;
float a, b, shx;
cout<<"Rectangle before Shearing: ";
line(x1, y1, x2, y2);
line(x1, y1, x4, y4);
line(x2, y2, x3, y3);
line(x3, y3, x4, y4);
getch();
clrscr();
cout<<"Enter Shearing angle in degrees: ";
cin>>a;
b = (3.14/180) * a;
cout<<b;
shx = tan(b);
cout<<shx;
cout<<"Rectangle after shearing ";
line(x1, y1, x2 + (shx*y2), y2);
line(x1, y1, x4, y4);
line(x2 + shx*y2, y2, x3 + shx*y3, y3);
line(x3 + shx*y3, y3, x4, y4);
getch();
}
void sheary()
{
int x1 = 100, y1 = 100, x2 = 100, y2 = 30, x3 = 170, y3 = 30, x4 = 170, y4 = 100;
float a,b, shy;
cout<<"Rectangle before Shearing";
line(x1,y1,x2,y2);
line(x1,y1,x4,y4);
line(x2,y2,x3,y3);
line(x3,y3,x4,y4);
getch();
clrscr();
cout<<"Enter the Shearing angle in degrees: ";
cin>>a;
b = (3.14/180)*a;
cout<<b;
shy = tan(b);
cout<<shy;
cout<<"Rectangle after Shearing";
line(x1,y1+shy*x1,x2,y2+shy*x2);
line(x1,y1+shy*x1,x4,y4);
line(x2,y2+shy*x2,x3,y3);
line(x3,y3,x4,y4);
getch();
}
void main()
{
int gd = DETECT, gm, c;
initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
cout<<"1.shear in x \n 2.shear in y \n Select one option: ";
cin>>c;
if(c == 1)
{
shearx();
}
else if(c == 2)
sheary();
else
exit(0);
getch();
closegraph;
}