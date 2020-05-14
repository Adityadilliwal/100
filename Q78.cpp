//Lower Triangular Matrix
#include<iostream>
using namespace std;
int main()
{
 	int m,n,rows,columns,a[10][10];
 	cout<<"Number of rows & colums: ";
 	cin>>m>>n;
 	cout<<"Elements are\n";
 	for(rows=0;rows<m;rows++)
  	{
   		for(columns=0;columns<n;columns++)
    	{
      		cin>>a[rows][columns];
    	}
  	}
  	
 	for(rows=0;rows<m;rows++)
  	{
  		cout<<"\n";
   		for(columns=0;columns<n;columns++)
    	{
    		if(rows>=columns)
    		{
    			cout<<"\t"<<a[rows][columns];
			}
			else
			{
				cout<<"\t0";
			}
   	 	}
  	}
 	return 0;
}
