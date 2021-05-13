#include<iostream>

using namespace std;

int main()
{
    int testCases, arrsize = 0, element, *ar, position;
    cin>>testCases;
    while(testCases--)
	{
	    position = -1;
	    int flag = 0;
	    cin>>arrsize>>element;
        ar = new int[arrsize];
        for(int i =0;i<arrsize;i++)
        {
	        cin>>ar[i];
	        if(ar[i]==element && flag ==0)
	        {
                position = i + 1;
                flag++;
            }
	    }

        cout<<position<<endl;
        delete[] ar;
    }
    return 0;
}