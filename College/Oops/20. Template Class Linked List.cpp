#include<iostream>
#include<conio.h>

using namespace std;

template<class T>
class node
{
public:
	T data;
	node<T>* link;
};

template<class T>
class list
{
private:
	node<T>* first;
public:
	list();
	~list();
	void createlist();
	void deletion();
	void insertion();
	void display();
};

template<class T>
list<T>::list()
{
	first = NULL;
}

template<class T>
list<T>::~list()
{
	node<T>* next;
	while (first)
	{
		next = first->link;
		delete first;
		first = next;
	}
}

template<class T>
void list<T>::createlist()
{
	T a;
	node<T>* cur;
	node<T>* ptr;
	cout << "\nEnter data Of New Node (Enter 0 To Have other options):";
	cin >> a;
	while (a)
	{
		cur = new node<T>;
		cur->data = a;
		cur->link = NULL;
		if (first == NULL)
			first = cur;
		else
			ptr->link = cur;
		ptr = cur;
		cout << "\nEnter data Of New Node (Enter 0 To Have other options):";
		cin >> a;
	}
}

template<class T>
void list<T>::insertion()
{
	node<T>* cur, * ptr;
	T ele;
	char ch;
	ptr = first;
	cur = new node<T>;
	cout << "\nEnter data Of New Node:";
	cin >> cur->data;
	cur->link = NULL;
	cout << "\n Do u wish to insert at the start [y/n]:";
	cin >> ch;
	if (ch == 'Y' || ch == 'y')
	{
		cur->link = first;
		first = cur;
	}
	else
	{
		cout << "\n Specify after which element do u want to insert :";
		cin >> ele;
		while (ptr != NULL)
		{
			if (ptr->data == ele)
			{
				cur->link = ptr->link;
				ptr->link = cur;
				break;
			}
			else
			{
				ptr = ptr->link;
			}
		}
	}
}

template<class T>
void list<T>::deletion()
{
	T ele;
	char ch;
	node<T>* ptr, * ptr1;
	if (first == NULL)
	{
		cout << "\nSorry list is empty.";
	}
	else
	{
		ptr = first;
		cout << "\nDo u want to delete first element? [y/n]:";
		cin >> ch;
		if (ch == 'y' || ch == 'Y')
		{
			first = first->link;
			delete ptr;
		}
		else
		{
			cout << "\nSpecify which element do u want to delete :";
			cin >> ele;
			while (ptr != NULL)
			{
				if (ptr->link->data == ele)
				{
					ptr1 = ptr->link;
					ptr->link = ptr1->link;
					delete ptr1;
					return;
				}
				else
				{
					ptr = ptr->link;
				}
			}
		}
	}
}

template<class T>
void list<T>::display()
{
	node<T>* ptr;
	if (first == NULL)
	{
		cout << "\n Sorry list is empty..";
	}
	else
	{
		ptr = first;
		while (ptr != NULL)
		{
			cout << ptr->data << "   ";
			ptr = ptr->link;
		}
	}
}

int main()
{
	int n;
	list <int> l;
	l.createlist();
	do
	{
		cout << "\n 1.Insertion \n2.Deletion \n3.Print List \n4.Exit \n";
		cout << "\n Enter your option : ";
		cin >> n;
		switch (n)
		{
		case 1: l.insertion();
			break;
		case 2: l.deletion();
			break;
		case 3: l.display();
			break;
		case 4:
			exit(0);
			break;
		}
	} while (n <= 4);
	_getch();
	return 0;
}
