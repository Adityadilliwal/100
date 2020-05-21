//Inverse of a matrix
#include<iostream>
using namespace std;
int main()
{
	int mat[3][3];
	float det=0;
	cout<<"Enter elements\n";
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
           cin>>mat[i][j];
	cout<<"\nmatrix is\n";
	for(int i=0;i<3;i++)
	{
		cout<<"\n";
		for(int j=0;j<3;j++)
			cout<<mat[i][j]<<"\t";
	}

	for(int i=0;i<3;i++)
		det=det+(mat[0][i]*(mat[1][(i+1)%3]*mat[2][(i+2)%3]-mat[1][(i+2)%3]*mat[2][(i+1)%3]));
	cout<<"\ndeterminant is: "<<det;
	cout<<"\nInverse of matrix is\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cout<<((mat[(j+1)%3][(i+1)%3]*mat[(j+2)%3][(i+2)%3])-(mat[(j+1)%3][(i+2)%3]*mat[(j+2)%3][(i+1)%3]))/det<<"\t";
		cout<<"\n";
	}
   return 0;
}
