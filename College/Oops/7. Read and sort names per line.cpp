#include<iostream>
using namespace std;
#include<string.h>
void sort_names(char Arr[40][40], int siz)
{
    char temp[40];
    for(int i = 0; i<siz; i++)
    {
        for(int j = 0; j<siz - 1; j++)
        {
            if(strlen(Arr[i]) < strlen(Arr[j]))
            {
                strcpy(temp,Arr[i]);
                strcpy(Arr[i],Arr[j]);
                strcpy(Arr[j],temp);
            }
        }
    }
    for(int i = 0; i < siz; i++)
    {
    cout<<Arr[i]<<" ";
    }
}
int main()
{
    int siz;
    char Arr[40][40];
    cout<<"Enter the size : ";
    cin>>siz;
    for(int i = 0; i < siz; i++)
    {
        cin>>Arr[i];
    }
    sort_names(Arr, siz);
    return 0;
}
