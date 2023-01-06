#include <iostream>
#include <string>
using namespace std;
int main(){
	int x;
	cout<<"Enter the scale of the Employee (1 to 3)";
	cin >> x;
		int Salary, Rent, Utility, NetSalary;
	switch (x){
		case 1:
	
		Salary = 50000;
		Rent = Salary/10;
		Utility = 3000;
		NetSalary= Salary + Rent + Utility;
		cout<<"The Basic Salary is : "<<Salary <<endl;
		cout<<"The House Rent is : "<<Rent<<endl;
		cout<<"The Utility Allowance is : "<<Utility <<endl;
		cout<<"Net Payable Salary is : "<<NetSalary<<endl;
		break;
		case 2:
	
		Salary = 70000;
		Rent = Salary/10;
		Utility = 5000;
		NetSalary= Salary + Rent + Utility;
		cout<<"The Basic Salary is : "<<Salary <<endl;
		cout<<"The House Rent is : "<<Rent<<endl;
		cout<<"The Utility Allowance is : "<<Utility <<endl;
		cout<<"Net Payable Salary is : "<<NetSalary<<endl;
		break;
		case 3:
	
		Salary = 90000;
		Rent = Salary/10;
		Utility = 7000;
		NetSalary= Salary + Rent + Utility;
		cout<<"The Basic Salary is : "<<Salary <<endl;
		cout<<"The House Rent is : "<<Rent<<endl;
		cout<<"The Utility Allowance is : "<<Utility <<endl;
		cout<<"Net Payable Salary is : "<<NetSalary<<endl;
		break;
	default:
	cout<<"Incorrect Range....";
	}
}

	

 