#include<iostream>
using namespace std;
class Distance
{
    float feet;
    float inches;
public:
    Distance()
    {
        feet = 0.0;
        inches = 0.0;
    }

    Distance(float f, float i)
    {
        feet = f;
        inches = i;
    }

    void input_details()
    {
        cout<<"Enter the feet: ";
        cin>>feet;
        cout<<"Enter the inches: ";
        cin>>inches;
    }

    void convert()
    {
        if(inches >= 12)
        {
            feet += (int)inches/12;
            inches = (int)inches%12;
        }
        cout<<"Conversion done";
    }

    void display()
    {
        cout<<feet<<"'"<<inches<<'"';
    }
};

int main()
{
   Distance d;
   int option;
   cout<<"\t\t....Distance....\n\n";
   cout<<"1. Input Details \n2. Convert \n3. Display \n4. Exit";
   do{
        cout<<"\nEnter the choice: ";
        cin>>option;

        switch(option)
        {
            case 1: d.input_details();
                    break;
            case 2: d.convert();
                    break;
            case 3: d.display();
                    break;
            case 4: cout<<"Application closed";
                    break;
            default: cout<<"Enter a valid option";
        }
   }while(option != 4);
   return 0;
}
