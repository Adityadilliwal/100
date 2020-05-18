//use of auto,global.extern,static & register variable
#include<stdio.h>
int a=69;//global variable
int main()
{
	static int i=0;//static variable
	extern int c;//extern variable
	{
	   auto	int b=88;//auto variable
		register int e=30;//register variable	
	}
	return 0;
}
