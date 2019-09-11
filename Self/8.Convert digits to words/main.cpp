#include <iostream>

using namespace std;

int main()
{
    int num,n,rev=0,rem;
    cout<<"Enter the number "<<endl;
    cin>>num;
    n=num;
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        rev=rev*10+rem;
    }
    int rev2,rem2;
    while(rev!=0)
    {
        rem2=rev%10;
        rev=rev/10;
        rev2=rev2*10+rem2;
        switch(rem2)
        {
            case 1 :cout<<"ONE ";
                    break;
            case 2 :cout<<"TWO ";
                    break;
            case 3 :cout<<"THREE ";
                    break;
            case 4 :cout<<"FOUR ";
                    break;
            case 5 :cout<<"FIVE ";
                    break;
            case 6 :cout<<"SIX  ";
                    break;
            case 7 :cout<<"SEVEN ";
                    break;
            case 8 :cout<<"EIGHT ";
                    break;
            case 9 :cout<<"NINE ";
                    break;
            case 0 :cout<<"ZERO ";
                    break;
        }
    }
    cout<<"Is the word conversion of given digit "<<n;
    return 0;
}
