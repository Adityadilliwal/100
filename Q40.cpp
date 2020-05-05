//Check whether given number is Amstrong or not
#include<iostream>
using namespace std;
int main()
{
	int n,r,sum=0,temp;
	cout<<"Enter any number: ";
	cin>>n;
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(sum==temp)
	{
		cout<<"Amstrong num";
	}
	else
	{
		cout<<"Not Amstrong";
	}
	return 0;
}
