#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793

double area (int n, double side);

int main()
{
    int n2;
    double side2;

    printf("Enter the number of sides: ");
    scanf("%d", &n2);
    printf("\nEnter the side: ");
    scanf("%lf", &side2);
    printf("\nThe area of the polygon is %.14lf\n",area(n2,side2));
    return 0;
}

double area(int n,double side)
{
    return (n*pow(side,2))/(4*tan(PI/n));
}
