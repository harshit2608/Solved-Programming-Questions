#include<bits/stdc++.h>
using namespace std;
struct Data
{
    int x, y;
};
  double interpolate(Data f[], int xi, int n)
{
    double result = 0;
    for (int i=0; i<n; i++)
    {
        double long  term = f[i].y;
        for (int j=0;j<n;j++)
        {
            if (j!=i)
                term = term*(xi - f[j].x)/double(f[i].x - f[j].x);
        }
        result += term;
    }
    return result;
}
int main()
{
    cout<<"***********LAGRANGE'S INTERPOLATION*****************\n";
    Data f[] = {{15,45}, {27,92}, {81,142}, {131,300},{175,545}};
    cout<<"Data set is "<<endl;
    cout<<"15 , 45\n27 , 92\n81 , 142\n131 , 300\n175 , 545\n";
    cout << "Value of f(7) is : " << interpolate(f, 7, 6);
    return 0;
}
