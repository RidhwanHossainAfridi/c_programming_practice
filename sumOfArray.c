#include <stdio.h>

int sum(int *ptr,int size);

int main ()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    int *arrptr = (int*)malloc(n*sizeof(int));
    arrptr = &arr;

    printf("\nEnter the elements of the array: \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe sum of the array (excluding the numbers that are divisible by 5) is: %d\n", sum(arrptr,n));
    free(arrptr);
    return 0;
}
int sum(int *ptr,int size)
{
    int i,sum=0;
    for(i=0; i<size; i++)
    {
        if(*(ptr+i)%5 == 0)
        {
            continue;
        }
        else
        {
            sum += *(ptr+i);
        }
    }
    return sum;
}
