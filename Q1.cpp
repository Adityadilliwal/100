//Reverse given string
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cout<<"Enter any string: "; 
	cin>>str;
	reverse(str.begin(),str.end());
	cout<<"Reverse of string is: "<<str<<endl;
}
