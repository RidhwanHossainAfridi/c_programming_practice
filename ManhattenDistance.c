//Ridhwan Hossain Afridi
//1822074043
#include <stdio.h>

struct manhatten_distance{
    int x_cord;
    int y_cord;
};
typedef struct manhatten_distance coordinate;

int main (){
    int man_dis;
    coordinate location1,location2;

    printf("This program will find the Manhattan Distance between two coordinates:\n\n");
    printf("Enter first coordinate: \n");
    printf("x-coordinate: ");
    scanf("%d", &location1.x_cord);
    printf("y-coordinate: ");
    scanf("%d", &location1.y_cord);


    printf("\n\nEnter second coordinate: \n");
    printf("x-coordinate: ");
    scanf("%d", &location2.x_cord);
    printf("y-coordinate: ");
    scanf("%d", &location2.y_cord);

    man_dis= abs(location1.x_cord-location2.x_cord)+abs(location1.y_cord-location2.y_cord);

    printf("\n\nThe Manhattan distance between these two points are: %d\n\n", man_dis);
    return 0;
}
