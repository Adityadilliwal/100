#include<iostream>
using namespace std;
#define max 10
class array{
	int n;
	int a[max];
	public:
		void getata();
		void linearsearch();
};
void array::getata()
{
	cout<<"enter size of array: ";
	cin>>n;
	cout<<"enter array elements\n";
	for(int i=0;i<n;i++)
	cin>>a[i];
}
void array::linearsearch()
{ 
	int item;
	cout<<"Enter item to be searched: ";
	cin>>item;
	if(n==0)
	cout<<"array empty";
	else
	for(int i=0;i<n;i++)
	{	
		if(item==a[i])
		{
		cout<<"item found at position: "<<++i<<endl;
		break;
		}
	}
}
main()
{
	array obj;
	obj.getata();
	obj.linearsearch();
}

