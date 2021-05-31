#include <stdio.h>

int main (){
    char A[100],B[100];
    int i,j,lenA=0,C=0;

    printf("Enter a string: ");
    gets(A);

    for(i=0;A[i]!='\0';i++){
        lenA++;
    }
    C=lenA-1;
    for(i=0;A[i]!='\0';i++){
        B[i]=A[C--];
    }
    B[C+i+1]='\0';

    printf("The reverse of the string: ");
    puts(B);
}
