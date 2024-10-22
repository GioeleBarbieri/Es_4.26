#include <stdio.h>

int main(void)
{
   int num, i, risultato;

   for(i=1; i<=12; i++)
   {
      for(num=1; num<=12; num++)
      {
         risultato=num*i;
         printf("%d ",risultato);
      }
      printf("\n");

   }
   return 0;
}
