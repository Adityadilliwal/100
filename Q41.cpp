//Check whether two strings are identical
#include<iostream>
#include <bits/stdc++.h>
using namespace std; 
int main() 
{ 
    char str1[100],str2[100]; 
    cout<<"Enter the string 1: "; 
    cin>>str1;  
    cout<<"Enter the string 2: ";
	cin>>str2;
    if(strcmp(str1,str2)==0) 
    { 
        cout<<"Yes,identical"; 
    } 
    else 
	{ 
        cout<<"No,different"; 
    } 
    return 0; 
} 
