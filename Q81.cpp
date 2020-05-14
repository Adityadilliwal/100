//Determinant of matrix
#include<iostream>
using namespace std;
int main()
{
 	int rows,columns,a[2][2],determinant=0;
 	cout<<"Elements\n";
 	for(rows=0;rows<2;rows++)
  	{
   		for(columns=0;columns<2;columns++)
    	{
      		cin>>a[rows][columns];
    	}
  	}
	determinant=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
  	cout<<"The Determinant of matrix: "<<determinant;
 	return 0;
}
