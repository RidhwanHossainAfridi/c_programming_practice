#include <stdio.h>
#include <stdlib.h>

int primeChecker(int num);

int main ()
{
    int num1,flag=0;
    char num_str[20];

    FILE *fp1;
    FILE *fp2;

    if((fp1=fopen("input.txt","r"))==NULL)
    {
        printf("File not found!");
        return 0;
    }
    fp1 = fopen("input.txt", "r");
    while (fscanf(fp1,"%s ",num_str)!=EOF)
    {
        num1 = atoi(num_str);
        fp2 = fopen("output.txt", "a");
        if( primeChecker(num1) == 1 )
        {
            fprintf(fp2,"%d ", num1);
            flag = 1;
        }
    }
    if (flag == 0)
    {
        fprintf(fp2,"No prime numbers found");
    }
    fclose(fp2);
    fclose(fp1);
    printf("Done! Check output.txt file!\nDelete the output.txt file before running again!\n");
    return 0;
}

int primeChecker(int num)
{
    int i;
    if(num<=1)
    {
        return 0;
    }

    for (i=2;i<num;i++)
    {
        if ( num%i == 0 )
            return 0;
    }
    return 1;
}
