#include <stdio.h>
#define _MAX 100

int main()
{
    int i, n, temp, position = 0;

    int lpos = 0, spos = 0;

    int small = 0,large = 0;
        

    int arr[_MAX];

    printf("Enter the size of array:\n");
    scanf("%d", &n);
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }
    printf("Elements of array are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Position:%d Element:%d\n", i, arr[i]);
    }
    small = arr[0];
    large = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
            spos = i ;
        }

        if (arr[i] > large)
        {
            large = arr[i];
            lpos = i ;
        }
    }
    printf("The largest number in the array is:%d Position is:%d\n", large, lpos);
    printf("The smallest number in the array is:%d Position is:%d\n", small, spos);

    temp = arr[spos];
    arr[spos] = arr[lpos];
    arr[lpos] = temp;

    printf("Array after swapping the largest and smallest integer:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Position:%d Element:%d\n", i, arr[i]);
    }

    return 0;
}