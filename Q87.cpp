#include<iostream>
using namespace std;
int main()
{
	int arr[100],s,elem,pos;
	cout<<"Enter Array Size: ";
	cin>>s;
	cout<<"Enter array elements:\n";
	for(int i=0;i<s;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter element to be insert : ";
	cin>>elem;
	cout<<"Enter position at which element is to be inserted: ";
	cin>>pos;
	for(int i=s;i>pos;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos]=elem;
	cout<<"Updated array is: \n";
	for(int i=0;i<s+1;i++)
	{
		cout<<arr[i]<<" ";
	}
}
