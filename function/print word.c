#include <stdio.h>
#include <cs50.h>

void print(int num)
{

   for(int i = 1 ; i <= num ; i++)
   {
      printf("meow %d \n" , i );
   }

}


int main () {

   print(3);

   return 0;

}