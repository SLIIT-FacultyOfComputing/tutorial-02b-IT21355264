/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include<iostream>

using namespace std;

int main()
{
	
	double salary ,netsalary;
	int etype,OtHrs,OtRate;
	
	cout<<"Enter Employee type:-";
	cin>>etype;
	cout<<"Enter the salary:-";
	cin>>salary;
	cout<<"Enter the OtHrs:-";
	cin>>OtHrs;
	
	switch(etype)
	{
		case 1: 
		   OtRate = 1000;
		     break;
		case 2: 
		   OtRate = 1500;
		     break;
		default: 
		   OtRate = 1700;
		     break;    
	}
	netsalary = salary + OtHrs + OtRate;
	
	cout<<"Net Salary is :-"<<netsalary<<endl;

  return 0;
	
}
