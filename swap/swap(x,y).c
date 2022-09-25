#include <stdio.h>

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{

    int x;
    printf("x : ");
    scanf("%d", &x);

    int y;
    printf("y : ");
    scanf("%d", &y);



    swap(&x, &y);



    printf("x : %d \n", x);
    printf("y : %d", y);

    return 0;
}

