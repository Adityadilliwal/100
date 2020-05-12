//Addition of two matrices
#include <iostream>
using namespace std;
int main()
{
   int r,c,a[10][10],b[10][10],sum[10][10];
   cout<<"Enter the number of rows and columns: ";
   cin>>r>>c;
   cout<<"Enter elements of matrix1\n";
   for(int i=0;i<r;c++)
   {
      for(int j=0;j<c;j++)
         {
			cin>>a[i][j];
         }
    }
   cout<<"Enter elements of matrix2\n";
   for(int i=0;i<r;i++)
   {
      for(int j=0;j<c;j++)
     {	
         	cin>>b[i][j];
    	}
	}
   for (int i=0;i<r;i++) 
   {
      for(int j=0;j<c;j++) 
	  {
         sum[i][j]=a[i][j]+b[i][j];
         cout<<"Sum of matrices:\n"<<sum[i][j];
      }
   }
   return 0;
}
