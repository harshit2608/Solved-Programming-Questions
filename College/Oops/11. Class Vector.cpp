#include<iostream>
using namespace std;
class Vector_
{private:
    float arr[10];
    int index = 0;
public:
    void modify(int n, int value)
    {        arr[n-1] = value;    }
    Vector_ operator *(int scalar)
    {        Vector_ v;
        for(int i = 0; i < index; i++)
        {            v.arr[v.index++] = scalar*arr[i];        }
        return v;    }
    void operator >>(float a)
    {        arr[index++] = a;    }
    friend ostream& operator<<(ostream& os, const Vector_& v);
};
ostream& operator<<(ostream& os, const Vector_& v)
{    cout<<"{ ";
    for(int i = 0; i <v.index; i++)
    {        cout<<v.arr[i]<<", ";    }
    cout<<"}";
return os;	}
int main()
{    Vector_ v;
    v>>8;    v>>9;    v>>12;
    v>>45;    v>>6;
    v.modify(2,9);
    cout<<"\nModified\n";
    cout<<v<<endl;
    cout<<"\nMultiplied with 4\n";
    Vector_ v2 = v*4;
    cout<<v2<<endl;
    return 0;
}
