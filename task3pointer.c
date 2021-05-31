//Ridhwan Hossain Afridi
//1822074043

//Write a C program using pointers to read in an array of integers and print its elements in
//reverse order.

#include <stdio.h>

int main() {
    int i,arr[5]={1,2,3,4,5},arr2[5];
    int *ptr;
    ptr=arr;

    printf("The array is: 1,2,3,4,5\n");
    printf("The reverse of the array is: ");
    for(i=0;i<5;i++){
        printf("%d ", *(ptr+4));
        ptr--;
    }
    return 0;
}
