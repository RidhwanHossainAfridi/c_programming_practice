#include <stdio.h>

int minimum(int ar[], int i, int size);

int main ()
{
    int a[10] = {1,2,3,4,5,-10,-88,8,9,10};
    printf("%d", minimum(a,0,10));
    return 0;
}
int minimum(int ar[], int i, int size)
{

    int small;

    if(i >= size-2)
    {
        if(ar[i] < ar[i+1])
        {
            return ar[i];
        }
        else
        {
            return ar[i+1];
        }
    }

    small = minimum(ar, i+1, size);

    if(ar[i] < small)
    {
        return ar[i];
    }
    else
    {
        return small;
    }
}
