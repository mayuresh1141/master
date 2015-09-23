#include<stdio.h>

int main (int argc,char **argv)
     {
   int i=1;
       for(i;i<argc;i++)
          {
            printf("%s ",argv[i]);
          }
      return 0;
     }
