//sort 1d array by Merge sort
#include<iostream>
using namespace std;
#define Max 10
class Array
{
	int n;
	int a[Max];
	public:
	void getdata();
	void traverse();
	void mergesort(int,int);
	void merge(int,int,int);
	void mergecall();
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
	cout<<"Elements of array are:"<<"\n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<endl;
}
void Array::mergecall()
{
	mergesort(0,n-1);
}
void Array::mergesort(int first,int last)
{
	if(first<last)
	{
		int mid;
		mergesort(first,mid);
		mergesort(mid+1,last);
		merge(first,mid,last);
	}
}
void Array::merge(int first,int mid,int last)
{
  int i, j, k;
	mid=(first+last)/2;
    int n1 = mid-first+ 1;
    int n2 =last-mid;
    int L[n1+1], R[n2+1];
    for(i = 0; i <= n1-1; i++)
    L[i] = a[first + i];
	L[i]=10000;
    for (j = 0; j <=n2-1; j++)
    R[j] = a[mid + 1+ j];
	R[j]=10000;
    i = 0;
    j = 0;
  for(k=first;k<=last;k++)
{
	if(L[i]<R[j])
	{
		a[k]=L[i];
	i++;
	}

 	else if(L[i]>R[j])
	{
		a[k]=R[j];
		j++;
	}
}
}
main()
{  
	Array obj;
	obj.getdata();
	obj.traverse();
 	obj.mergecall();
	obj.traverse();
}
