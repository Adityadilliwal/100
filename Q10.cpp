//Interchange two numbers by Call-by-value
#include <stdio.h>
void swap(int*, int*);
int main()
{
   int n1,n2;
   printf("Enter the numbers: \n");
   scanf("%d%d",&n1,&n2);
   printf("Before Swapping\n n1=%d\n n2=%d\n",n1,n2);
   swap(&n1,&n2); 
   printf("After Swapping\n n1=%d\n n2=%d\n",n1,n2);
   return 0;
}
void swap(int *n1,int *n2)
{
   int temp;
   temp= *n2;
   *n2= *n1;
   *n1=temp;   
}
