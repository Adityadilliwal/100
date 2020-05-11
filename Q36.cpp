//String as an argument and return its lenght
#include<stdio.h>
int main() 
{
  char str[100], *pt;
  int i=0;
  printf("Enter string: ");
  gets(str);
  pt=str;
  while(*pt!='\0') 
  {
    i++;
    pt++;
  }
  printf("Length of String:%d",i);
  return 0;
}
