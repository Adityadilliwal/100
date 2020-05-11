//Copy one string into another using pointers
#include<iostream>
#include<string.h>
#define max_size 100 
int main()
{
    char string1[max_size],string2[max_size];
    char *str1=string1;
    char *str2=string2; 
    cout<<"Enter any string: ";
    cin>>string1;
    while(*(str2++)=*(str1++));
    cout<<"First string: ",string1);
	cout("Second string: ",string2);
    return 0;
}
