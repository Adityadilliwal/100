//Factorial of number
#include <iostream>  
using namespace std;  
int main()  
{  
   int fact=1,num;    
  cout<<"Enter any Number: ";    
 cin>>num;    
  for(int i=1;i<=num;i++)
  {    
      fact=fact*i;    
  }    
  cout<<"Factorial of number is: "<<fact<<endl;  
  return 0;  
}  
