//Value of nCr using do-while loop
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fact(int x)
{
	int f=1;
	while(x!=0)
	{
		f=f*x;
		x--;
	}
}
main()
{
	int n,r,nCr;
	cout<<"Enter value of n: ";
	cin>>n;
	cout<<"Enter value of r: ";
	cin>>r;
	nCr=fact(n)/(fact(r)*fact(n-r));
	cout<<"nCr is: "<<nCr;
}
