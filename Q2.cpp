//Palindrome string
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string str;
	cout<<"Enter any string: ";
	cin>>str;
	if(str==string(str.rbegin(), str.rend()))
	{
		cout<<"is palindrome"<<endl;
	}
	else
	cout<<"not palindrome"<<endl;
}
