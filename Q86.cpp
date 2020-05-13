//Deletion of element from desired position in array
#include <stdio.h>
int main()
{
   int array[100],pos,n;
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
   printf("Enter %d elements\n", n);
   for (int i=0;i<n;i++)
      scanf("%d", &array[i]);

   printf("Enter position for deletion\n");
   scanf("%d", &pos);
   if (pos>=n+1)
      printf("Deletion not possible\n");
   else
   {
      for(int i=pos-1;i<n-1;i++)
         array[i]=array[i+1];

      printf("Final array\n");
      for(int i=0;i<n-1;i++)
         printf("%d\n", array[i]);
   }
   return 0;
}


