#include <stdio.h>

void draw(int n)
{
        if(n == 0)
        {
                return;
        }
        
        // draw(n - 1);   لو عاوز اطبع هرم  هكتبها هنا

        
        for(int i = 0 ; i < n ; i++)
        {
                printf("* ");
        }
        printf("\n");
        
        draw(n - 1);  // لو عاوز اطبع هرم مقلوب هكتبها في الاخر هنا

}


int main()
{
    
    int number;
    printf("What's Number : ");
    scanf("%d" , &number);
    
    
    draw(number);
    
    return 0;
}

/*

output :

What's Number : 4
* * * * 
* * * 
* * 
*

*/


