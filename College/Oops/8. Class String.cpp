#include<iostream> 
#include<string.h> 
using namespace std; 
class String
{ 
    char *a = new char; 
    public: 
    String()
    {         a = "Hi"; 	    } 
    String(const String &object)
    {         a = object.a; 	    } 
    ~String()
    {         delete a; 	    } 
    void input_details(char val)
    { 
        *a = val; 
    } 
    void display()
    { 
        cout<<"String Entered: "<<*a; 
    } 
    char rev()
    { 
        char r[20]; 
        int j = strlen(a)-1; 
        for(int i = 0; a[i]; i++)
        { 
            r[j--] = a[i]; 
        } 
    return *r; 
    } 
}; 
int main(){ 
    String s; 
    char a[] = "Hello"; 
    s.input_details(*a); 
    s.display(); 
    char r = s.rev(); 
    cout<<"Reverse String: "<<r; 
    return 0; 
}
