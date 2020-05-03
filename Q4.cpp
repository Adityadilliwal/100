//n terms of Fibonacci series
#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,c=0,n;
	cout<<"Enter no of terms: ";
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		if(i==1)
		{
			cout<<" "<<a;
			continue;
		}
		if(i==2)
		{
			cout<<b<<" ";
			continue;
		}
		c=a+b;
		a=b;
		b=c;
		cout<<"c"<<" "<<endl;	
	}	
	return 0;
}
	
