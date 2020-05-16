//Add, Sub, Multiply two complex numbers by structure
#include <stdio.h>
struct Complex
{
  int real,img;  
};
int main()
{
    struct Complex c1,c2,c3;
    int i;
    int Add(int,int);
    int Sub(int,int);
    struct Complex multiply(struct Complex,struct Complex);
    printf("Real part of first no:");
    scanf("%d",&c1.real);
    printf("Imaginary part of first no:");
    scanf("%d",&c1.img);
    printf("Real part of second no:");
    scanf("%d",&c2.real);
    printf("Imaginary part of second no:");
    scanf("%d",&c2.img);
    
    printf("Press 1 for Addition\n");
    printf("Press 2 for Subtraction\n");
    printf("Press 3 for Multiplication\n");
    printf("Press 4 to exit\n");
    printf("Enter your choice:\n");
    scanf("%d",&i);
    switch(i)
    {
    case 1:
      printf("Addition is:");
      printf("%d + %d",Add(c1.real,c2.real),Add(c1.img,c2.img));
    	break;
    case 2:
      printf("Subtraction is:");
      printf("%d - %d",Sub(c1.real,c2.real),Sub(c1.img,c2.img));
    	break;
    case 3:
      printf("Multiplication is:");
      c3=multiply(c1,c2);
      printf("(%d + %di) * (%d + %di) = %d + %di",c1.real,c1.img,c2.real,c2.img,c3.real,c3.img);
    	break;
    }
    return 0;
}
int Add(int a,int b)
{
	return a+b;
}
int Sub(int a,int b)
{
	return a-b;
}
struct Complex multiply(struct Complex c1,struct Complex c2)
{
    struct Complex c4;
    c4.real=c1.real*c2.real-c1.img*c2.img;
    c4.img=c1.img*c2.real+c1.real*c2.img;
    return c4;
}
