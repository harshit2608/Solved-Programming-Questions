#include <iostream>
using namespace std;

int search(int A[],int n,int key)
{
    for(int i=0;i<n;i++)
        if(key==A[i])
            {return i;}
    return -1;
}

int main()
{
    int A[] = {3,5,7,9,11,13,15,17,19};
    int k;
    cout<<"Enter the element to be searched for  "<<endl;
    cin>>k;
    int index = search(A,9,k);
    cout<<"Element found at index "<<index;
    return 0;
}


