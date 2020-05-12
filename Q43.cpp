//Check whether matrix is Symmatric or not
#include<iostream>
using namespace std;
int main()
{
 	int i,j,a[10][10],b[10][10],count = 1;
  
 	cout<<"Enter no. rows and columns: ";
 	cin>>i>>j;
 	cout<<"Enter elements\n";
 	for(int rows=0;rows<i;rows++)
  	{
   		for(int columns=0;columns<j;columns++)
    	{
      		cin>>a[rows][columns];
    	}
  	}
   	//Transpose of matrix 
 	for(int rows=0;rows<i;rows++)
  	{
   		for(int columns=0;columns<j;columns++)
    	{
      		b[columns][rows]=a[rows][columns];
    	}
  	}
     
 	for(int rows=0;rows<i;rows++)
  	{
   		for(int columns=0;columns<j;columns++)
    	{
    		if(a[rows][columns]!=b[rows][columns])
    		{
    			count++;  
				break;  		
			}
   	 	}
  	}
  	if(count==1)
  	{
  		cout<<"Symmetric";
	}
	else
	{
		cout<<"Not Symmetric";
	}
 	return 0;
}
