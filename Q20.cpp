//Binary Search using recursion
#include<iostream>
#define size 10
using namespace std;
int binsearch(int[],int,int,int);
int main() 
{
   int num,key,pos,first,last,list[size];
   cout<<"Enter total elements: ";
   cin>>num;
   cout<<"Enter the elements of list\n";
   for (int i=0;i<num;i++) 
   {
      cin>>list[i];
   }
   first=0;
   last=num-1;
   cout<<"Enter element to be searched: ";
   cin>>key;
   pos=binsearch(list,key,first,last);
   if(pos!=-1) 
   {
      cout<<"Number present at: "<<(pos+1);
   } 
   else
      cout<<"The number is not present";
   return (0);
}
int binsearch(int a[],int item,int first,int last) 
{
   int mid;
   if (first>last)
      return -1;
   mid=(first+last)/2;
   if (item==a[mid]) 
   {
      return (mid);
   } 
   else if(item<a[mid]) 
   {
      binsearch(a,item,first,mid-1);

   } 
   else 
   {
      binsearch(a,item,mid+1,last);
   }
}
