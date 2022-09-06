// Working of arithmetic operators
#include <stdio.h>
int main()
{
    int a = 9,b = 4, c;
    
    c = a+b;
    printf("a+b = %d \n",c); // a+b = 13 
   
    c = a-b;
    printf("a-b = %d \n",c); // a-b = 5 
  
    c = a*b;
    printf("a*b = %d \n",c); // a*b = 36 
 
    c = a/b;
    printf("a/b = %d \n",c); // a/b = 2
  
    c = a%b;
    printf("Remainder when a divided by b = %d \n",c); // Remainder when a divided by b = 1 
    
    return 0;
}