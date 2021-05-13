#include<iostream>
#include<stdlib.h>
using namespace std;
class Shape
{
public:
    double length;
    double height;
};
class Triangle:public Shape
{
    Shape triangle;
    public:
    void Input_details(double l, double h)
    {
        triangle.length = l;
        triangle.height = h;
    }
    void Area()
    {
        double area;
        area = 0.5 * triangle.length * triangle.height;
        cout<<"\nArea of Triangle: "<<area<<"\n";
    }
};
class Rectangle:public Shape
{
    Shape rectangle;
    public:
    void Input_details(double l, double h)
    {
        rectangle.length = l;
        rectangle.height = h;
    }
    void Area()
    {
        double area;
        area = rectangle.length * rectangle.height;
        cout<<"\nArea of Rectangle: "<<area<<"\n";
    }
};
int main()
{
    int ch;
    do
    {
        cout<<"\t\tShape\n\n";
        cout<<"1. Triangle\n2. Rectangle\n3. Exit";
        cout<<"\nChoose an option: ";
        cin>>ch;
        switch(ch)
        {
            case 1: double b,h;
                    system("CLS");
                    cout<<"Enter the dimension base - height: \n";
                    cin>>b>>h;
                    Triangle t;
                    t.Input_details(b,h);   t.Area();
                    break;
            case 2: double l,w;
                    system("CLS");
                    cout<<"Enter the dimension length - breadth: \n";
                    cin>>l>>w;
                    Rectangle r;
                    r.Input_details(l,w);   r.Area();
                    break;
            case 3: cout<<"Application closed....";break;
            default: cout<<"Enter a Valid Option";
        }
    }while(ch != 3);
    return 0;
}
