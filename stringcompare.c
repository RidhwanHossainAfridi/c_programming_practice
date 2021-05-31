//Ridhwan Hossain Afridi
//1822074043
//String Compare Task
#include <stdio.h>

int main()
{
    int i,lenstr1=0,lenstr2=0,count=0;
    char str1[100],str2[100];

    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    for(i=0; str1[i]!='\0'; i++)
    {
        lenstr1++;
    }

    for(i=0; str2[i]!='\0'; i++)
    {
        lenstr2++;
    }

    if(lenstr1!=lenstr2)
    {
        printf("The strings are not equal");
        return 0;
    }
    for(i=0; str1[i]==str2[i] && str1[i]!='\0' && str2[i]!='\0'; i++)
    {
        count++;
    }

    if(count==lenstr1)
    {
        printf("The strings are equal");
    }
    else
    {
        printf("The strings are not equal");
    }
    return 0;
}
