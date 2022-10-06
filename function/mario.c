#include <stdio.h>

void mario(char mark ,int num)
{
   for(int i = 0 ; i < num ; i++)
   {
      for(int s = 0 ;s < num; s++)
      {
         printf("%c " , mark);
      }
      printf("\n");

   }
   printf("\n");
}

int main ()
{
   mario('#',4);
   return 0;
}
