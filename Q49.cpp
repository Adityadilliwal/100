//Library Catalogue
#include<stdio.h>
#define SIZE 20
struct libcatalogue

{
    char title[20];
    char author[20];
    char pubname[20];
    int year;
    float price;

};
void output(struct libcatalogue l[],int n);
main()
{
    struct libcatalogue b[SIZE];
    int n;
    printf("Enter the Numbers of Books:");
    scanf("%d",&n);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("Title of book:\n");
        scanf("%s",b[i].title);
    	printf("Author name\n");
        scanf("%s",b[i].author);
        printf("year of publication:\n");
        scanf("%d",&b[i].year);
        printf("Price\n");
        scanf("%f",&b[i].price);
    }
    output(b,n);
}
void output(struct libcatalogue l[],int n)
{
    int t=1;
    for(int i=0;i<n;i++,t++)
    {
        printf("\n");
        printf("Book No.%d\n",t);
        printf("\t\tBook %d title:%s\n",t,l[i].title);
        printf("\t\tBook %d Author:%s\n",t,l[i].author);
        printf("\t\tBook %d year of pub.:%d\n",t,l[i].year);
		printf("\t\tBook %d price:%f\n",t,l[i].price);
        printf("\n");
	}
}
