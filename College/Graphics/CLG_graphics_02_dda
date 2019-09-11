#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h> 

int abs (int n) 
{ 
    return ( (n>0) ? n : ( n * (-1))); 
} 

void DDA(int X0, int Y0, int X1, int Y1) 
{
    int dx = X1 - X0; 
    int dy = Y1 - Y0; 
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy); 
    float Xinc = dx / (float) steps; 
    float Yinc = dy / (float) steps; 
    float X = X0; 
    float Y = Y0; 
    for (int i = 0; i <= steps; i++) 
    { 
        putpixel (X,Y,RED); 
        X += Xinc;            
        Y += Yinc;           
        delay(100);                                      
    } 
} 

int main() 
{ 
    int gd = DETECT, gm;
    initgraph (&gd, &gm, "C:turboc3\\bgi");    
  
    int X0 = 2, Y0 = 2, X1 = 14, Y1 = 16; 
    DDA(2, 2, 14, 16); 
    return 0; 
} 

