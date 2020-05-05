//Sum of digits of an integer
#include<iostream>
using namespace std;
int main()
{
  int num,r,sum=0;
  cout<<" Enter any number: ";
  cin>>num;
  while(num>0)
  {
     r=num%10;
     sum=sum+r;
     num=num/10;
  }
  cout<<"Sum of the digits of Given Number is: "<<sum;
  return 0;
}

