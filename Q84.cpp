//To find smallest element in an array
#include<iostream>
using namespace std;
int main() 
{
   int a[100],num,smallest;
   cout<<"Total elements: ";
   cin>>num;
   cout<<"Array elements\n";
   for(int i=0;i<num;i++)
      cin>>a[i];
   smallest=a[0];
   for(int i=0;i<num;i++) 
   {
      if(a[i]<smallest) 
	  {
         smallest=a[i];
      }
   }
   cout<<"Smallest Element:"<<smallest;
   return 0;
}
