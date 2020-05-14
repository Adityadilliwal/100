//Upper Triangular Matrix
#include<iostream>
using namespace std;
int main()
{
 	int m,n,rows,columns,a[10][10];
  
 	cout<<"rows and columns: ";
 	cin>>m>>n;
 
 	cout<<"Matrix Elements\n";
 	for(rows=0;rows<m;rows++)
  	{
   		for(columns=0;columns<n;columns++)
    	{
      		cin>>a[rows][columns];
    	}
  	}
     
 	for(rows=0;rows<m;rows++)
  	{
  		printf("\n");
   		for(columns=0;columns<n;columns++)
    	{
    		if(columns>= rows)
    		{
    			cout<<"\t"<<a[rows][columns];
			}
			else
			{
				printf("\t0");
			}
   	 	}
  	}
 	return 0;
}
