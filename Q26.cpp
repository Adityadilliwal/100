//Max & Min integer in an array
#include<iostream>
using namespace std;
int main()
{
	int arr[100],n,max,min;
	cout<<"Enter size of array:\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter Elements:\n";
		cin>>arr[i];
	}
	max=arr[0];
	min=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]<min)
		min=arr[i];	
		if(arr[i]>max)
		max=arr[i];
	}
	cout<<"\nLargest element is: "<<max;
	cout<<"\nSmallest element is: "<<min;
	
	return 0;
}
