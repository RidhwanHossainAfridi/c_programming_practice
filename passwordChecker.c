#include <stdio.h>
#include <string.h>

int main ()
{
    char password[10000];

    printf("Enter the password: ");
    gets(password);

    while(1)
    {
        int i,flag1=0,flag2=0,flag3=0,flag4=1,flag5=0;

        if(strlen(password) >= 8 ){
            flag1 = 1;
        }
        for(i=0; i<strlen(password); i++){
            if(password[i] >= 'a' && password[i] <='z' ){
                flag2 = 1;
                break;
            }
        }
        for(i=0; i<strlen(password); i++){
            if(password[i] >= 'A' && password[i] <='Z' ){
                flag3 = 1;
                break;
            }
        }
        for(i=0; i<strlen(password); i++){
            if(password[i] == ' ' ){
                flag4 = 0;
                break;
            }
        }
        for(i=0; i<strlen(password); i++){
            if(password[i] >= '1' && password[i] <= '9'){
                flag5 = 1;
                break;
            }
        }
        if(flag1 == 1 && flag2 == 1 && flag3 == 1 && flag4 == 1 && flag5 == 1){
            printf("Strong Password!");
            return 0;
        }
        printf("Weak Password! Please enter again: ");
        gets(password);
    }
    return 0;
}
