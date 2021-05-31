//Ridhwan Hossain Afridi
//1822074043

//Create an array of size given by the user. Find a number taken as input from user. Your task is
//to print the memory address and the index of the number using pointer to travel the array. Note
//that if number is found at multiple position you should print all memory address.

#include <stdio.h>

int main (){
    int n,i,search,c=0;
    int *ptr;

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of the array: \n");
    for(i=0;i<n;i++){
        printf("arr[%d]: ",i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    printf("The array is: \n");
    for(i=0;i<n;i++){
        printf("arr[%d]: %d\n",i,arr[i]);
    }
    printf("\n");
    printf("Enter the number you want to search: ");
    scanf("%d", &search);

    printf("\n");
     for(i=0;i<n;i++){
        if(search==arr[i]){
            ptr= &arr[i];
            printf("Memory Address: %d\n", ptr);
            printf("Index: %d\n\n", i);
        }
        else{
            c++;
        }
    }
    if(c==n){
        printf("Value not found!!!\n");
    }
    return 0;
}
