#include <stdio.h>
#include <math.h>

double distance(int x1,int y1,int x2,int y2){
    return pow((pow((x1-x2),2)+pow((y1-y2),2)),0.5);
}

struct point
{
    int x1;
    int y1;
};
typedef struct point Point;

struct line
{
    Point firstEndPoint;
    Point secondEndPoint;
};
typedef struct line Line;

int main ()
{
    int n,i;
    double max,min;
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    if(n<2 || n>30)
    {
        printf("\nNumber of lines out of range.\n\n");
        return 0;
    }

    Line arr[n];
    for(i=0; i<n; i++)
    {
        printf("Enter first end point of line %d: ",i+1);
        scanf("%d %d", &arr[i].firstEndPoint.x1,&arr[i].firstEndPoint.y1);
        printf("Enter second end point of line %d: ",i+1);
        scanf("%d %d", &arr[i].secondEndPoint.x1,&arr[i].secondEndPoint.y1);
    }
    max = distance(arr[0].firstEndPoint.x1,arr[0].firstEndPoint.y1,arr[0].secondEndPoint.x1,arr[0].secondEndPoint.y1);
    for(i=0; i<n; i++)
    {
        if(distance(arr[i].firstEndPoint.x1,arr[i].firstEndPoint.y1,arr[i].secondEndPoint.x1,arr[i].secondEndPoint.y1) > max )
        {
            max = distance(arr[i].firstEndPoint.x1,arr[i].firstEndPoint.y1,arr[i].secondEndPoint.x1,arr[i].secondEndPoint.y1);
        }
    }
    min = distance(arr[0].firstEndPoint.x1,arr[0].firstEndPoint.y1,arr[0].secondEndPoint.x1,arr[0].secondEndPoint.y1);
    for(i=0; i<n; i++)
    {
        if(distance(arr[i].firstEndPoint.x1,arr[i].firstEndPoint.y1,arr[i].secondEndPoint.x1,arr[i].secondEndPoint.y1) < min )
        {
            min = distance(arr[i].firstEndPoint.x1,arr[i].firstEndPoint.y1,arr[i].secondEndPoint.x1,arr[i].secondEndPoint.y1);
        }
    }
    printf("\nHighest length of a line is: %.4lf\n",max);
    printf("Lowest length of a line is: %.4lf\n\n",min);
    return 0;
}


