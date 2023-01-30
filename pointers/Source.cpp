#include<iostream>
using namespace std;

//call by value
void addBalanceValue(int bal, int inc)
{
	bal = bal + inc;
	cout << "INFUN: " << bal << " is the current balance." << endl;

}
//call by reference
void addBalanceRef(int &bal, int &inc)
{
	bal = bal + inc;
	cout << "INFUN: " << bal << " is the current balance." << endl;

}

//call by pointer
void addBalancePnt(int *bal, int *inc) // if data type like INT is next to * it means pointer
{
	*bal = *bal + *inc;
	cout << "INFUN: " << *bal << " is the current balance." << endl; //if no data type by it means to dereference pointer

}

int main()
{

	int curbalance = 100;
	int *Pcurbalance = &curbalance;

	int userinput = 0;


	cout << "welcome to the banking app. Enter the amount you wish to increase your balance by." << endl;
	cout << &curbalance << endl;
	cout << Pcurbalance;
	cin >> userinput;
	addBalanceValue(curbalance, userinput);
	addBalanceRef(curbalance, userinput);
	addBalancePnt(&curbalance, &userinput);
	addBalancePnt(Pcurbalance, &userinput);
	cout << "MAIN: " << curbalance << " is the current balance." << endl;

}
