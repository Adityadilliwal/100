//Scalar Multiplication of Matrix
#include<iostream>
using namespace std;
int main()
{
 	int m,n,rows,columns,multipli[10][10],num;
 	cout<<"Enter rows and columns\n";
 	cin>>m>>n;
 	cout<<"Enter Elements\n";
 	for(rows=0;rows<m;rows++)
  	{
   		for(columns=0;columns<n;columns++)
    	{
      		cin>>multipli[rows][columns];
    	}
  	}
 	cout<<"Enter num for multipli: ";
 	cin>>num;
 	for(rows=0;rows<m;rows++)
  	{
   		for(columns=0;columns<n;columns++)
    	{
      		multipli[rows][columns]=num*multipli[rows][columns];    
   	 	}
  	}
 	cout<<"Final Matrix\n";
 	for(rows=0;rows<m;rows++)
  	{
   		for(columns=0;columns<n;columns++)
    	{
      		cout<<"\t"<<multipli[rows][columns];
    	}
    	cout<<"\n";
  	}
 	return 0;
}
