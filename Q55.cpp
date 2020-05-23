//Copy  contents of one file to another
#include<stdio.h>
#include<stdlib.h>
main() 
{
   FILE *fp1, *fp2;
   char ch;
   fp1=fopen("File1.txt", "r");
   fp2=fopen("File2.txt", "w");
   while(1)
   {
      ch=fgetc(fp1);
      if(ch==EOF)
         break;
      else
         putc(ch,fp2);
   }
   printf("File copied");
   fclose(fp1);
   fclose(fp2);
}
