#include <stdio.h>

int productOfDigits(int num){
    int product = 1 , remainder;
    if (num <= 0){
        return 0;
    }
    while(num > 0){
        remainder = num % 10;
        product *= remainder;
        num /= 10;
    }
    return product;
}

int main (){
    printf("%d", productOfDigits(652));
    return 0;
}
