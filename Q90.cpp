//Check a perfect number
#include <iostream>
using namespace std;
int main()
{
    int num,rem,sum=0;
    cout<<"Enter a Number: ";
    cin>>num;
    for(int i=1;i<=(num-1);i++)
    {
		rem=num%i;
		if(rem==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
        cout<<"Number is perfect number";
    else
        cout<<"Number is not a perfect number";
    return 0;
}
