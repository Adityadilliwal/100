//Calculate factorial using recursion
#include<iostream>
using namespace std;
int fact(int);
int main()
{
	int num,f;
	cout<<"Enter a number: ";
	cin>>num;
	f=fact(num);
	cout<<f;
}
int fact(int num)
{
	static int f=1;
	if(num==1)
	{
		return (1);
	}
	else
	{
		f=fact(num-1)*num;
	}
	return (f);
}
