//subtract two numbers without using subtraction operator
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,sub;
	cout<<"Enter two numbers:\n";
	cin>>num1>>num2;
	sub=num1+~num2+1;
	cout<<"subtraction of nunbers is: "<<sub;
	return 0;
}

