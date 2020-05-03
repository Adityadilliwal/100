//Swapping of Num using Call-by-reference
#include<iostream>
using namespace std;
void swap(int*,int*);
int main()
{
	int num1,num2;
	cout<<"Enter the values of 2 numbers: ";
	cin>>num1>>num2;
	cout<<"Before Swapping"<<endl;
	cout<<"num1= "<<num1<<endl;
	cout<<"num2= "<<num2<<endl;
	swap(&num1,&num2);
	cout<<"\nAfter Swapping"<<endl;
	cout<<"num1= "<<num1;
	cout<<"\nnum2= "<<num2;
	return 0;
}
void swap(int *num1,int *num2)
{
	int temp;
	temp= *num1;
	*num1= *num2;
	*num2= temp;
}
