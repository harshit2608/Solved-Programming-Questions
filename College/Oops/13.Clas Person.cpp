
#include<iostream>
using namespace std;
class person
{
    private:
    int age;
    string name;
    string gender;
    public:
    person(int a,string n, string gen)
    {
        age=a;
        name=n;
        gender=gen;
    }
    int getage(){return age;}
    string getName(){return name;}
    string getGen() {return gender;}
};

class Employee:public person
{
private:
    int eid;
    int salary;
    string company;
public:
    Employee(int a,string n,string gen,int id,int sal,string comp):person(a,n,gen)
    {
        eid=id;
        salary=sal;
        company=comp;
    }
    int geteid(){return eid;}
    int getSalary(){return salary;}
    string getCompany(){return company;}
};

class Student:public person
{
private:
    int roll_No;
    string school;
    int Class;
public:
    Student(int a,string n,string gen,int roll,int cl, string sch):person(a,n,gen)
    {
        roll_No=roll;
        Class=cl;
        school=sch;
    }
    int getroll(){return roll_No;}
    int getclass(){return Class;}
    string getschool(){return school;}
};

int main()
{
    Employee p1(28,"John","Male",0121,65000,"Google");
    Student p2(15,"Rani","Female",35,10,"Kendriya Vidalaya");
    cout<<p1.getName()<<" is a "<<p1.getGen()<<" employee of "<<p1.getage()<<" having employee id "<<p1.geteid()<<" works at "<<p1.getCompany()<<" at a salary package of "<<p1.getSalary()<<endl;
    
cout<<p2.getName()<<" is "<<p2.getage()<<" year old "<<p2.getGen()<<" having roll no "<<p2.getroll()<<" studies in "<<p2.getclass()<<" at "<<p2.getschool()<<" school "<<endl;
}
