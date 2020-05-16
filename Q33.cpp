//1d as argument & returning maximum value
#include<iostream>
using namespace std;
int main()
{
    int a[100],n,max;
    cout<<"size of the array: ";
    cin>>n;
 
    cout<<"elements in array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(int i=1;i<n;i++)
    {
		   if(max<a[i])
		    max=a[i];       
    }
		cout<<"maximum is:"<<max;
    return 0;
}
