//Matrix multiplication by checking compaibility
#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],multi[10][10];
	int r,c;
	printf("num of rows: ");
	scanf("%d", &r);
	printf("num of column: ");
	scanf("%d", &c);
	printf("matrix 1\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix 2\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("multiplication is\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			multi[i][j]=a[i][j]*b[i][j];
		}
	}
		for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d\t",multi[i][j]);
		}
		printf("\n");
	}
}
