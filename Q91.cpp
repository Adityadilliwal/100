//Solve quadratic equation
#include<stdio.h>
#include<math.h> 
main()
{
    float a,b,c,dis,root1,root2;
    printf("Enter the values of a, b and c: ");
    scanf("%f %f %f",&a,&b,&c);
    dis=pow(b,2)-4*a*c; 
    if(dis<0)
    {
        printf("\nThe roots are imaginary\n");
        printf("Root1= %.3f%+.3fi",-b/(2*a),sqrt(-dis)/(2*a));
        printf("\nRoot2= %.3f %+.3fi\n",-b/(2*a),-sqrt(-dis)/(2*a));
    }
    else
    {
        root1=(-b+sqrt(dis))/(2.0*a);
        root2=(-b-sqrt(dis))/(2.0*a);
        printf("\nThe first root is: %f",root1);
        printf("\nThe second root is: %f",root2);
    }
    return 0;
}
