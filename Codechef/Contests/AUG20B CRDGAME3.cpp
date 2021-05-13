#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int pc, pr, pcd, prd;
        cin>>pc>>pr;
        if (pc%9 ==0)
        {
            pcd=pc/9;
        }
        else
        {
            pcd = (pc/9)+1;
        }

        if (pr%9==0)
        {
            prd = pr/9;
        }
        else
        {
            prd = (pr/9)+1;
        }

        if (pcd == prd)
        {
            cout<<"1"<<" "<<prd<<endl;
        }
        if (prd<pcd)
        {
            cout<<"1"<<" "<<prd<<endl;
        }
        if (pcd<prd)
        {
            cout<<"0"<<" "<<pcd<<endl;
        }
    }
}