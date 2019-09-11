#include <iostream>

using namespace std;

int main()
{
    int test_cases;
    int arr[6]={100,50,10,5,2,1};
    int b[6]={0};
    cin>>test_cases;
    while(test_cases--)
    {
        int note,i=0,sum=0;
        cin>>note;
        while(note>0 && i<6)
        {
            int a,b;
            a=note/arr[i];
            b=note%arr[i];
            i++;
            sum+=a;
            note=b;
        }
        cout<<sum<<endl;
    }
    return 0;
}
