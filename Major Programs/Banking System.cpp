#include<iostream>
#include<fstream>
#include<cstdlib>
#include<map>
#include<vector>

using namespace std;

#define MIN_BALANCE 500;
class insufficientFunds{};
class Account
{
private:
	long accountNumber;
	string firstName;
	string lastName;
	string address;
	float balance;
	long identityProf;
	static long nextAccountNumber;
public:
	Account() {};
	Account(string fname, string lname, string address, float balance);
	long getAccountNumber()
	{
		return accountNumber;
	}
	string getFirstName()
	{
		return firstName;
	}
	string getLastName()
	{
		return lastName;
	}
	string getAddress()
	{
		return address;
	}
	float getBalance()
	{
		return balance;
	}

	void deposit(float amount);
	void withdraw(float amount);
	static void setLastAccountNumber(long accountNumber);
	static long getLastAccountNumber();
	friend ofstream& operator<<(ofstream& ofs, Account& acc);
	friend ifstream& operator>>(ifstream& ifs, Account& acc);
	friend ostream& operator<<(ostream& os, Account& acc);
};

long Account::nextAccountNumber = 0;

class Bank
{
private:
	map<long, Account>accounts;
public:
	Bank();
	Account openAccount(string fname, string lname, string address,float balance);
	Account balanceEnquiry(long accountNumber);
	Account deposit(long accountNumber, float amount);
	Account withdraw(long accountNumber, float amount);
	void closeAccount(long accountNumber);
	void showAllAccounts();
	~Bank();
};

int main()
{
	Bank b;
	Account acc;
	int choice;
	string fname, lname, address;
	long accountNumber;
	float balance;
	float amount;
	cout << "\t\t***WELCOME TO BANKIG SYSTEM***" << endl;
		do {
			cout << "\n\tSelect one option below ";
			cout << "\n\t1 Open an Account";
			cout << "\n\t2 Balance Enquiry";
			cout << "\n\t3 Deposit";
			cout << "\n\t4 Withdrawal";
			cout << "\n\t5 Close an Account";
			cout << "\n\t6 Show All Accounts";
			cout << "\n\t7 Quit";
			cout << "\nEnter your choice: ";
			cin >> choice;
			switch (choice)
			{
			case 1:
				cout << "Enter First Name: ";
				cin >> fname;
				cout << "Enter Last Name: ";
				cin >> lname;
				cout << "Enter the address: ";
				cin >> address;
				cout << "Enter initial Balance: ";
				cin >> balance;
				acc = b.openAccount(fname, lname,address, balance);
				cout << endl << "Congratulations, Account is Created" << endl;
				cout << acc;
				break;
			case 2:
				cout << "Enter Account Number:";
				cin >> accountNumber;
				acc = b.balanceEnquiry(accountNumber);
				cout << endl << "Your Account Details" << endl;
				cout << acc;
				break;
			case 3:
				cout << "Enter Account Number:";
				cin >> accountNumber;
				cout << "Enter Balance:";
				cin >> amount;
				acc = b.deposit(accountNumber, amount);
				cout << endl << "Amount is Deposited" << endl;
				cout << acc;
				break;
			case 4:
				cout << "Enter Account Number:";
				cin >> accountNumber;
				cout << "Enter Balance:";
				cin >> amount;
				acc = b.withdraw(accountNumber, amount);
				cout << endl << "Amount Withdrawn" << endl;
				cout << acc;
				break;
			case 5:
				cout << "Enter Account Number:";
				cin >> accountNumber;
				b.closeAccount(accountNumber);
				cout << endl << "Account is Closed" << endl;
				cout << acc;
			case 6:
				b.showAllAccounts();
				break;
			case 7:
				cout << "Thanks for banking with us" << endl;
				cout << "Please visit soon..." << endl;
				break;
			default:
				cout << "\nEnter corret choice";
				exit(0);
			}
		} while (choice != 7);
	return 0;
}

Account::Account(string fname, string lname, string address, float balance)
{
	nextAccountNumber++;
	accountNumber = nextAccountNumber;
	firstName = fname;
	lastName = lname;
	this->address = address;
	this->balance = balance;
}

void Account::deposit(float amount)
{
	balance += amount;
}

void Account::withdraw(float amount)
{
	if ((balance - amount) < MIN_BALANCE)
	{
		throw insufficientFunds();
	}
	else balance -= amount;
}

void Account::setLastAccountNumber(long accountNumber)
{
	nextAccountNumber = accountNumber;
}

long Account::getLastAccountNumber()
{
	return nextAccountNumber;
}

ofstream& operator<<(ofstream& ofs, Account& acc)
{
	ofs << acc.accountNumber << endl;
	ofs << acc.firstName << endl;
	ofs << acc.lastName << endl;
	ofs << acc.address << endl;
	ofs << acc.balance << endl;
	return ofs;
}

ifstream& operator>>(ifstream& ifs, Account& acc)
{
	ifs >> acc.accountNumber;
	ifs >> acc.firstName;
	ifs >> acc.lastName;
	ifs >> acc.address;
	ifs >> acc.balance;
	return ifs;
}

ostream& operator <<(ostream& os, Account& acc)
{
	os << "First Name:" << acc.getFirstName() << endl;
	os << "Last Name:" << acc.getLastName() << endl;
	os << "Address:" << acc.getAddress() << endl;
	os << "Account Number:" << acc.getAccountNumber() << endl;
	os << "Balance:" << acc.getBalance() << endl;
	return os;
}

Bank::Bank()
{
	Account account;
	ifstream file;
	file.open("Bank.data");
	if (!file)
	{
		return;
	}
	while (!file.eof())
	{
		file >> account;
		accounts.insert(pair<long, Account>(account.getAccountNumber(), account));
		Account::setLastAccountNumber(account.getAccountNumber());
		file.close;
	}
	Account Bank::openAccount(string fname, string lname, float balance)
	{

	}
}