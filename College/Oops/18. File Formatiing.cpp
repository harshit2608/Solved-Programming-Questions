#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
class item
{
    char name[40];
    int code,serial;
    float cost;
    public:
        void get_data(int sn,int c,char *n,float co)
        {
            serial=sn;
            strcpy(name,n);
            code=c;
            cost=co;
        }
        void display();
 };

void item:: display()
{
    cout.precision(2);
    cout.setf(ios::fixed,ios::floatfield);
    cout.setf(ios::showpoint);
    cout.setf(ios::left,ios::adjustfield);
    cout<<setw(7)<<serial<<setw(20)<<code<<setw(30)<<name;
    cout.setf(ios::right,ios::adjustfield);
    cout<<setw(15)<<cost<<endl;
 }

 int main()
 {
     item a[5];
     a[0].get_data(1,123,"Keyboard",1250.95);
     a[1].get_data(2,905,"Mouse",195.7);
     a[2].get_data(3,151,"Monitor",5320.5);
     a[3].get_data(4,720,"Processor",11450.85);
     a[4].get_data(5,456,"Printer",2450.00);
     cout<<setw(5)<<"S.No."<<setw(11)<<"Item Code"<<setw(20)<<"Item Name"<<setw(34)<<"Cost"<<endl;
     for(int i=0;i<75;i++)
     {
        cout<<"-";

     }
     cout<<endl;
     for(int i=0;i<5;i++)
     {
        a[i].display();
     }

     return 0;
}
