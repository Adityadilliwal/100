//Print 1-100 without using loop
#include <stdio.h> 
int main() 
{ 
    static int i=1; 
    if (i <= 100) 
	{ 
        printf("%d ", i++); 
        main(); 
    } 
    return 0; 
} 
