//Sort 1D array using Quick sort
#include<stdio.h>
void quicksort(int num[25],int first,int last)
{
int i,j,pivot,temp;
if(first<last)
   {
      pivot=first;
      i=first;
      j=last;

      while(i<j)
	  {
         while(num[i]<=num[pivot]&&i<last)
            i++;
         while(num[j]>num[pivot])
            j--;
         if(i<j)
		 {
            temp=num[i];
            num[i]=num[j];
            num[j]=temp;
         }
      }
      temp=num[pivot];
      num[pivot]=num[j];
      num[j]=temp;
      quicksort(num,first,j-1);
      quicksort(num,j+1,last);
   }
}

int main()
{
   int count,num[20];
   printf("Total elements: ");
   scanf("%d",&count);
   
   printf("Enter elements:\n",count);
   for(int i=0;i<count;i++)
      scanf("%d",&num[i]);
   quicksort(num,0,count-1);
   printf("Final array: ");
   for(int i=0;i<count;i++)
      printf(" %d",num[i]);
   return 0;
}
