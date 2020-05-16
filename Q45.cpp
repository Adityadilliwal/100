//Sum of 1d array using malloc()
#include<stdio.h>
#include<stdlib.h>
int main()
{
 	int n, *a,*b,*s;
	printf("Enter number of elements: ");
 	scanf("%d", &n);
 	printf("Enter array 1\n");
	a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    scanf("%d",a+i);
    printf("Enter array 2\n");
	b=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
    scanf("%d",b+i);
    
   	s=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    *(s+i)=*(a+i)+*(b+i);
	printf("Result is\n");
	
	for(int i=0;i<n;i++)
	{
  		printf("%d\n",*(s+i));
 	}
}    
