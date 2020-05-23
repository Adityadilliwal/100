//print data of file in reverse order
#include<stdio.h>
int main()
{
      FILE *fp;
      char ch;
      int i,pos;
      fp=fopen("reverse.txt","r");
      if(fp==NULL)
      {
        printf("file not exist");
      }
      fseek(fp,0,SEEK_END);
      pos=ftell(fp);
      i=0;
      while(i<pos)
       {
            i++;
            fseek(fp,-i,SEEK_END);
            ch=fgetc(fp);
            printf("%c",ch);
      }
      return 0;
}
