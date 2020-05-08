//Check for Strong number
#include<iostream>
using namespace std;
int main()
{
	int num,r,fact,sum=0,temp,i;
	cout<<"Enter any number: ";
	cin>>num;
	temp=num;
	while(num)
	{
		fact=1,i=1;
		r=num%10;
		while(i<=r)
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		num=num/10;		
	}
	if(sum==temp)
	cout<<"Number is Strong num";
	else
	cout<<"Not a strong num";
	return 0;
}
