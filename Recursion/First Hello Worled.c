
#include <stdio.h>

void rec(int n)
{
        if(n == 0)
        {
                return;
        }
        printf("Hello world! \n");
        rec(n - 1);
}

int main()
{
    rec(3);

    return 0;
}
