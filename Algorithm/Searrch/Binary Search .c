#include<stdio.h>

int binary_Search(int arr[] , int low , int hight, int elment)
{
    while(low <= hight)
    {
        int mid = (low + hight)/2;

        if(arr[mid] == elment)
        {
            return mid;
        }
        if(arr[mid] < elment)
        {
            low = mid + 1;
        }
        else
        {
           hight = mid - 1;
        }

    }

    return -1;
}

int main()
{
    int arr[] = {2,8,68,77,1,86,4};

    int n = sizeof(arr) / sizeof(arr[0]);

    printf ("%d \n",binary_Search(arr,0,n-1,8)); // index  1

    return 0;
}