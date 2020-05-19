//String Operations
#include<stdio.h>
void addsubstring(char x[])
{
	int pos,count=0;
	char res[100],sub[100];
	printf("Enter sub-string\n");
	scanf("%s",&sub);
	printf("Enter the position to add the sub-string\n");
	scanf("%d",&pos);
	for(int i=0;i<pos;i++)
	res[i]=x[i];
	for(int i=0;sub[i]!='\0';i++)
	{
	    res[i+pos-1]=sub[i];
	    count++;
    }  
	for(int i=pos-1;x[i]!='\0';i++)
	res[i+count]=x[i];
    printf("Resultant String is = %s",res);
}
void delChar(char x[])
{
	char res[50];
	int n,pos;
	printf("Enter the number of characters to delete\n");
	scanf("%d",&n);
	printf("Enter the position to delete\n");
	scanf("%d",&pos);
	for(int i=0;i<pos;i++)
	res[i]=x[i];
	for(int i=pos+n;x[i]!='\0';i++)
	res[i-n]=x[i];
	printf("Resultant String: %s",res);
}
void replChar(char x[])
{
	char res[50],c[1];
	int pos;
	printf("Enter the character to replace\n");
	scanf("%s",&c);
	printf("Enter the position to replace\n");
	scanf("%d",&pos);
	for(int i=0;x[i]!='\0';i++)
	{
		if(i==pos-1)
		res[i]=c[0];
		else
		res[i]=x[i];
	}
	printf("Resultant String: %s",res);
}
main()
{
	char s[100];
	int ch;
	printf("Enter main string\n");
	fgets(s,sizeof(s),stdin);
	printf("1. For inserting a sub-string at position\n");
	printf("2. To delete the characters from position\n");
	printf("3. To replace a character from position\n");
	printf("Enter choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
	   case 1:addsubstring(s);
	          break;
	   case 2:delChar(s);
	          break;
	   case 3:replChar(s);
	          break;
	   default:printf("Invalid Input\n");
	           break;	
	}
}
