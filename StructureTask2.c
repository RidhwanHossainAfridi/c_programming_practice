//Ridhwan Hossain Afridi
//1822074043
//Structure Task 2
#include <stdio.h>
#include <string.h>

struct player_data
{
    char name[100];
    int age;
    char country[100];
    int ranking;
};
typedef struct player_data player;

int main ()
{
    int n,i;
    printf("Enter the number of players: ");
    scanf("%d", &n);

    player play[n];
    printf("\nEnter the details of players: \n\n");
    for(i=0; i<n; i++)
    {
        printf("Enter player %d name: ",i+1);
        fflush(stdin);
        gets(play[i].name);
        fflush(stdin);
        printf("Enter player %d age: ",i+1);
        scanf("%d", &play[i].age);
        printf("Enter player %d country: ",i+1);
        fflush(stdin);
        gets(play[i].country);
        fflush(stdin);
        printf("Enter player %d ranking: ",i+1);
        scanf("%d", &play[i].ranking);
        printf("\n");
    }
    char search[100];
    int count=0;
    printf("Please enter the player name you want to search: ");
    fflush(stdin);
    gets(search);
    fflush(stdin);

    printf("\nThe searched players details: \n");
    for(i=0; i<n; i++)
    {
        if(strcmp(strlwr(search),strlwr(play[i].name))==0)
        {

            printf("Age: %d\n", play[i].age);
            printf("Country: ");
            puts(play[i].country);
            printf("Ranking: %d", play[i].ranking);
            printf("\n\n");
        }
        else
        {
            count++;
        }
    }
    if(count==n)
    {
        printf("\nnot found\n\n");
    }
    return 0;
}
