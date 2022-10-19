
#include <stdio.h>

int main()
{
    int n = 50;
    int *p = &n;
    
    
    // "%p"  pointers
    printf("%p \n",p); // 0x7ffd78e0841c  
    printf("%i",*p); // 50

    return 0;
}
