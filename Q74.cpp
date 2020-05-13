//Sum of diagonal elements
#include<stdio.h>
int main()
{
    int mat[10][10];
    int row,col,sum=0;
    printf("Enter rows and columns\n");
    scanf("%d%d",&row,&col);
    printf("Enter the elements\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
 
    //add diagonal elements
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                sum=sum+mat[i][j];
            }
        }
    }
    printf("The sum of diagonal elements=%d\n",sum);
}
