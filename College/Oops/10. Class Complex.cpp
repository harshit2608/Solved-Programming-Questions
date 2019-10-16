#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;
public:
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    void display()
    {
        cout<<real<<"+i"<<img<<endl;
    }
    friend Complex operator+(Complex c1,Complex c2);
    friend Complex operator-(Complex c1,Complex c2);
    friend Complex operator*(Complex c1,Complex c2);
    friend Complex operator/(Complex c1,Complex c2);
};
Complex operator+(Complex c1,Complex c2)
{
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}
Complex operator-(Complex c1,Complex c2)
{
    Complex temp;
    temp.real=c1.real-c2.real;
    temp.img=c1.img-c2.img;
    return temp;
}
Complex operator*(Complex c1,Complex c2)
{
    Complex temp;
    temp.real=c1.real*c2.real;
    temp.img=c1.img*c2.img;
    return temp;
}
Complex operator/(Complex c1,Complex c2)
{
    Complex temp;
    temp.real=c1.real/c2.real;
    temp.img=c1.img/c2.img;
    return temp;
}
int main()
{
Complex c1(10,12),c2(2,6),c3,c4,c5,c6;
c3=c1+c2;
c4=c1*c2;
c5=c1-c2;
c6=c1/c2;
cout<<"Complex c1(10,12) and Complex c2(2,6)\n"<<endl;
cout<<"Addition of complex          -> ";
c3.display();
cout<<"Multiplication of complex    -> ";
c4.display();
cout<<"Subtraction of complex       -> ";
c5.display();
cout<<"Division of complex          -> ";
c6.display();
}
