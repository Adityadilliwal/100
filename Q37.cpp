//value of series 1+1/2+1/3......n
#include<iostream>
using namespace std;
int main()
{
	int n;
	float sum=0;
	cout<<"Enter the value of n: ";
	cin>>n;
	for(int i=1;i<=n;i++)
		sum+=1.0/i;
	cout<<"Sum: "<<sum;
	return 0;
}

