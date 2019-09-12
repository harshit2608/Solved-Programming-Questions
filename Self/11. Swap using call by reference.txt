#include <iostream>
using namespace std;

void swap(float &a,float &b)
{
    float temp = a;
    a = b;
    b = temp;
}

int main()
{
    float x, y;
    cout << "Hello world!" << endl;
    cout<<"Enter the values to be swapped"<<endl;
    cin>>x>>y;
    cout<<"Initial values at position 1 is "<<x<<" and at position 2 is "<<y<<endl;
    cout<<"After swapping the values are "<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}


