//Matrix Multipliaction
#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter row and column\n");
    scanf("%d%d",&r,&c);
    int a[r][c],b[r][c];
    printf("Enter first matrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }    
    }
    printf("Enter second matrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Resultant matrix \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",(b[i][j]+a[i][j]));
        } 
        printf("\n");  
    }
}
