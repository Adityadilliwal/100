//check if leap year or not
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a value: ";
	cin>>num;
	if(num%400==0)
	{
		cout<<"Leap year";
	}
	else if(num%100==0)
	{
		cout<<"Not leap year";
	}
	else if(num%4==0)
	{
		cout<<"Leap year";
	}
	else
	{
		cout<<"Not leap year";
	}
	return 0;
}
