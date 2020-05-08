//Add two numbers without using addition operator
#include<iostream>
using namespace std;
int main() 
{
   int num1,num2;
   cout<<"Enter two numbers:\n";
   cin>>num1>>num2;
   while(num2> 0) 
   {
      num1++;
      num2--;
   }
   cout<<"Addition of numbers is: "<<num1;
   return 0;
}
