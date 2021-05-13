#include<iostream>
using namespace std;
class DistanceMC;
class DistanceFI
{
private:
    float feet = 0;
    float inches = 0;
public:
    void input_details(float f, float I)
    {
        feet = f;
        inches = I;
    }
    void Display()
    {
        cout<<feet<<"' "<<inches<<'"'<<"\n";
    }
    DistanceFI operator +(DistanceFI &obj)
    {
        DistanceFI d;
        d.feet = this->feet + obj.feet;
        d.inches = this->inches + obj.inches;
        return d;
    }
    friend const DistanceFI operator+( const DistanceFI& m, const DistanceMC& n);
    friend ostream& operator<<(ostream& os, const DistanceFI& c);
};
ostream& operator<<(ostream &os, const DistanceFI& c)
{
    os << c.feet << c.inches<<"\n";
    return os;
}
class DistanceMC
{
private:
    float metres = 0;
    float centimetres = 0;
public:
    void input_details(float m, float c)
    {
        metres = m;
        centimetres = c;
    }
    void Display()
    {
        cout<<metres<<"m "<<centimetres<<"cm"<<"\n";
    }
    DistanceMC operator +(DistanceMC &obj)
    {
        DistanceMC d;
        d.metres = this->metres + obj.metres;
        d.centimetres = this->centimetres + obj.centimetres;
        return d;
    }
    friend const DistanceFI operator+( const DistanceFI& m, const DistanceMC& n);
};
const DistanceFI operator+(const DistanceFI& c1, const DistanceMC& c2)
{
    DistanceFI temp;
    temp.feet = c1.feet + 3.28084*c2.metres;
    temp.inches = c1.inches + 0.393701*c2.centimetres;
    return temp;
}
int main()
{
    DistanceFI fi;
    DistanceMC mc;
    fi.input_details(12,55);
    fi.Display();
    mc.input_details(45,29);
    mc.Display();
    DistanceFI f = fi + mc;
    f.Display();
    return 0;
}
