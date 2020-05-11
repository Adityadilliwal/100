//Find nCr value
#include <stdio.h>
int fact(int);
int main()
{
	int n,r,ncr;
  	printf("Enter a number n\n");
  	scanf("%d",&n);
 	printf("Enter a number r\n");
  	scanf("%d",&r);
  	ncr=fact(n)/(fact(r)*fact(n-r));
    printf("Value of %dC%d = %d\n",n,r,ncr);
}
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
