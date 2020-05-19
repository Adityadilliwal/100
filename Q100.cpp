//Convert Decimal Number to Octal number
#include<stdio.h>
#include<math.h>
int decitooct(int decinum);
int main()
{
    int decinum;
    printf("Enter decimal number: ");
    scanf("%d",&decinum);
    printf("%d in decimal=%d in octal",decinum,decitooct(decinum));
    return 0;
}
int decitooct(int decinum)
{
    int octnum=0,i=1;
    while(decinum!=0)
    {
        octnum+=(decinum%8)* i;
        decinum/=8;
        i*=10;
    }
    return octnum;
}
