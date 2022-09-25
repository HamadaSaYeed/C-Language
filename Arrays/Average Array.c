#include <stdio.h>

void Average()
{
    int size;
    printf("how many score : ");
    scanf("%d", &size); // 3
    int score[size]; // score[3]

    // input Array
    for (int i = 0; i < size; i++)
    {
        printf("number : ");
        scanf("%i", &score[i]);
    }


    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += score[i]; // 72 + 73 + 33 = 178
    }
    printf("Average is : %f \n", (sum) / (float)size);

}

int main()
{
    Average(); // Average is : 59.333332
    return 0;
}
