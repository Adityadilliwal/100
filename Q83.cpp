//Find largest and second largest element in array
#include<iostream>
using namespace std;
#define Maximum 10
class Array
{
	int n;
	int a[Maximum];
	public:
		void getdata();
		void traverse();
		void searchMax();
		
};
void Array::getdata()
{
	cout<<"Enter size of array\n";
	cin>>n;
	cout<<"Enter elements of array\n";
	for(int i=0;i<n;i++)
		
	cin>>a[i];
}
void Array::traverse()
{
	cout<<"Elements of array are:\n"<<endl;
	for(int i=0;i<n;i++)
	cout<<a[i]<<endl;
}
void Array::searchMax()
{
	int i,Max=0,Max2=0;
	if(n==Maximum)
	
		cout<<"Array overflow";
	
	else
	{
		for(i=0;i<n;i++)
		{
			if(Max<a[i])
			{
			Max2=Max;
			Max=a[i];
			}
		
		else
		{
			if(Max2<a[i])
			Max2=a[i];
		}
	}
	cout<<"Largest element is\n"<<Max;
	cout<<"\nSecond largest element is:"<<Max2;
}
}
main()
{
	Array obj;
	obj.getdata();
	obj.traverse();
	obj.searchMax();
}
