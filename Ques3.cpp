//Reverse of a number
#include<iostream>
using namespace std;
int main()
{
	int num,rem,reverse=0;
	cout<<"Enter any number: ";
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		reverse=reverse*10+rem;
		num/=10;
	}
	cout<<"Reverse is: "<<reverse<<endl;
	return 0;	
}
