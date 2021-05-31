#include <stdio.h>
#include <string.h>

int main()
{
    char s,string1[10000],string2[10000];
    int i, count[26]= {0}, index, min=0,alpha=0;

    printf("Enter a string: ");
    gets(string1);

    strcpy(string2,strlwr(string1));
    for(i=0; string2[i]!='\0'; i++)
    {
        if(string2[i] >= 'a' && string2[i] <= 'z')
        {
            index = string2[i]-'a';
            count[index] = count[index] + 1;
        }
    }
    for(i=0; i<26; i++)
    {
        if(count[i]==0)
        {
            continue;
        }
        min = count[i];
        alpha = i;
        break;
    }
    for(i=0; i<26; i++)
    {
        if(count[i] == 0)
        {
            continue;
        }
        if(count[i] < min)
        {
            min = count[i];
            alpha = i;
        }
    }
    printf("The letter with the minimum frequency is '%c' and the frequency is %d",alpha+'a',min);
    return 0;
}
