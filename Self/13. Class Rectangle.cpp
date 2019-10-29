#include <iostream>
using namespace std;

class rectangle
{
public:
    float breadth;
    float length;
public:
    float area()
    {
        cout<<"Area of the rectangle is "<<endl;
        return length*breadth;
    }

    float perimeter()
    {
        cout<<"\nPerimeter of the rectangle is "<<endl;
        return (2*(length+breadth));
    }
};

int main()
{
    rectangle r1,r2;
    r1.length = 10;
    r1.breadth = 5;
    r2.length = 100;
    r2.breadth = 19;
    cout<<r1.area();
    cout<<r1.perimeter();
    cout<<r2.area();
    cout<<r2.perimeter();
    return 0;
}


