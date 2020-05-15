//Linear Search using Recursion
#include<iostream>
using namespace std;
int ls(int a[],int item,int size) 
{
	size=size-1;
	if(size <0) 
	{
		return -1;
	} 
	else if(a[size]==item) 
	{
		return 1;
	} 
	else 
	{
		return ls(a,item,size);
	}
}
int main() 
{
	int size,result,a[size],item;
	cout<<"Size of array: ";
	cin>>size;
	cout<<"Enter elements\n";
	for(int i=0;i<size;i++) 
	cin>>a[i];
	for(int m=0;m<size;m++) 
	{
		cout<<a[m]<<endl;
	}
	cout<<"Enter Key To Search  in Array";
	cin>>item;
	result=ls(a,item,size--);
	if(result==1) 
	{
		cout<<"item Found ";
	} 
	else 
	{
		cout<<"not found ";
	}
	return 0;
}
