//1D array Bubble sort
#include<iostream>
using namespace std;
int main ()
{
   int temp,pass=0;
   int a[10] = {56,89,69,32,10,52,78,40,11,44};
   cout <<"Input list\n";
   for(int i=0;i<10;i++) 
   {
      cout <<a[i]<<"\t";
   }
		cout<<endl;
	for(int i=0;i<10;i++) 
	{
   		for(int j=i+1;j<10;j++)
   		{
      		if(a[j] < a[i]) 
			  {
         		temp = a[i];
         		a[i] = a[j];
         		a[j] = temp;
      			}
   		}	
			pass++;
	}
	cout <<"Sorted Element List\n";
	for(int i=0;i<10;i++) 
		{
   			cout <<a[i]<<"\t";
		}
		cout<<"\nNumber of passes taken to sort the list:"<<pass<<endl;
		return 0;
}
