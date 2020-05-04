//1D array Selection Sort
#include<iostream>
using namespace std;
int main ()
{
    int n,loc,temp,min,a[100];
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"\nEnter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
 
    for(int i=0;i<n-1;i++)
    {
        min=a[i];
        loc=i;
        for(int j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                loc=j;
            }
        }
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
    cout<<"\nSorted list is:\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}


