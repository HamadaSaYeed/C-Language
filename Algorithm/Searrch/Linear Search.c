#include<stdio.h>

int Linear_Search(int arr[] , int n , int elment)
{
    for(int i = 0 ; i < n ; i++)
        if(arr[i] == elment && elment <= arr[i])
            return i;

    return -1;
}

int main()
{
    int arr[] = {2,8,68,77,1,86,4};

    int n = sizeof(arr) / sizeof(arr[0]);

    printf ("%d \n",Linear_Search(arr,n,77));

    return 0;
}