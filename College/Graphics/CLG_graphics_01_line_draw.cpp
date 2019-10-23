#include<iostream>
#include<graphics.h>
#include<conio.h>

using namespace std;

int main()
{
int gd = DETECT , gm;
initgraph(&gd,&gm, "C:turboc3\\bgi");
for(int x= 0; x<=500; x++)
{
  putpixel(x,50,1);
}
getch();
}
