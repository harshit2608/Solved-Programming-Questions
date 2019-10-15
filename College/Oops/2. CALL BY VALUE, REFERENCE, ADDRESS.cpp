#include<iostream>
using namespace std;
void CBV_swap(int a, int b)
{    cout<<"CBV_swap initial val ->"<<a<<" "<<b<<endl;
	int temp;
	temp = a;
	a = b;
	b = temp;}
void CBR_swap(int &a ,int &b)
{    cout<<"CBR_swap initial val ->"<<a<<" "<<b<<endl;
	int temp;
	temp = a;
	a = b;
	b = temp;}
void CBA_swap(int *a, int *b)
{    cout<<"CBA_swap initial val ->"<<*a<<" "<<*b<<endl;
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;}
int main()
{    int x = 10, y = 20;
	CBV_swap(x, y);
	cout<<"\t"<<x<<" "<<y<<endl;
	CBA_swap(&x,&y);
	cout<<"\t"<<x<<" "<<y<<endl;
	CBR_swap(x, y);
	cout<<"\t"<<x<<" "<<y<<endl;
	return 0;
}
