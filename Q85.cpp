//Delete duplicate elements of array
#include<iostream>
using namespace std;
int main()
{
	int arr[10],total;
	cout<<"Total elements: ";
	cin>>total;
	cout<<"Elements are\n";
	for(int i=0;i<total;i++)
	{
    	cin>>arr[i];
   	}     
	for(int i=0;i<total;i++)
	{
		for(int j=i+1;j<total;j++)
		{
    		if(arr[i]==arr[j])
    		{
    			for(int k=j;k<total;k++)
    			{
    				arr[k]=arr[k + 1];
				}
				total--;
				j--;
			}
		}
	}
 	cout<<"Final Array\n";
 	for(int i=0;i<total;i++)
  	{
 		cout<<"\t"<<arr[i];
  	}	     
 	return 0;
}
