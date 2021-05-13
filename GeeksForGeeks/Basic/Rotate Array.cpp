#include <iostream>

using namespace std;

void reverseArrsy(int arr[],int i, int j)
{
    while(i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    
}
void leftrotate(int arr[],int d,int n)
{
    if (d==0)
        return;
    reverseArrsy(arr,0,d-1);
    reverseArrsy(arr,d,n-1);
    reverseArrsy(arr,0,n-1);
}

int main()
{
    int testCases,n,d,i;
    cin>>testCases;
    if(1<= testCases && testCases <=200)
    {
        while(testCases--)
        {
            cin>>n;
            cin>>d;
            int arr[n];
            for(i=0; i<n;i++)
            {
                cin>>arr[i];
            }
            leftrotate(arr,d,n);
            for(i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
