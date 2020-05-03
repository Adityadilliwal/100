//swap two numbers without temp variable
#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter 2 numbers: ";
	cin>>num1>>num2;
	cout<<"Before Swapping"<<endl;
	cout<<"num1= "<<num1<<endl;
	cout<<"num2= "<<num2<<endl;
	
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	
	cout<<"\nAfter Swapping"<<endl;
	cout<<"num1= "<<num1;
	cout<<"\nnum2= "<<num2;
	return 0;	
}
