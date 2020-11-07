#include <stdio.h>
#include <stdlib.h>

int main()
{ float x;
//
int y;
char z;

   char a='*';
   char b ='/' ;
   char c ='+';
   char d ='-';

   printf("choose letter\n");

   scanf(" %c",&z);

   if(z=='a')
   {
       scanf(" %d",&x);
       scanf(" %d",&y);
       printf("x*y=%d",x*y);

   }
   else if (z=='b')
   {
       scanf(" %d",x);
       scanf(" %d",y);
       printf("x/y=%d",x/y);
   }
   else if (z=='c')
   {
       scanf(" %d",x);
       scanf(" %d",y);
       printf("x+y=%d",x+y);

   }
   else if (z=='d')
   {
       scanf(" %d",x);
       scanf("
             %d",y);
       printf("x-y=%d",x-y);
   }


}
