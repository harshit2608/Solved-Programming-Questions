#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    double hra,da,basic_sal,gross;
    int test_cases;
    cin>>test_cases;
    while(test_cases--)
    {
        cin>>basic_sal;
        if(basic_sal<1500)
        {
            hra=(basic_sal*10)/100;
            da=(basic_sal*90)/100;
            gross=basic_sal+hra+da;
            cout << std::setprecision(2)<< std::fixed<<gross<<endl;
        }
        else if(basic_sal>=1500)
        {
            hra=500;
            da=(basic_sal*98)/100;
            gross=basic_sal+da+hra;
            cout << std::setprecision(2)<< std::fixed<<gross<<endl;
        }
    }
    return 0;
}
