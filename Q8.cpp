//GCD of two numbers using recursion
#include <iostream>
using namespace std;
int gcd(int n1,int n2) 
{ 
   if(n2==0) 
      return n1; 
   return gcd(n2,n1%n2);  
} 
int main() 
{ 
   int n1,n2;
   cout<<"Enter numbers: ";
   cin>>n1>>n2; 
   cout<<"GCD of numbers is:\n"<<gcd(n1,n2); 
   return 0; 
}   
