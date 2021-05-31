#include <stdio.h>
int r1,c1,r2,c2,r3,c3;
void matrixMultiply(int mat1[10][10],int mat2[10][10]);

int main (){
    int i,j;

    printf("The matrices will be multiplied in the order (matrix 1)(matrix 2)(matrix 3)\n");
    printf("Note: For a successful multiplication (Column 1 = Row 2) & (Column 2 = Row 3)\n\n");

    printf("Enter the dimension of matrix 1: \n   Row 1: ");
    scanf("%d", &r1);
    printf("Column 1: ");
    scanf("%d", &c1);
    printf("Enter the dimension of matrix 2: \n   Row 2: ");
    scanf("%d", &r2);
    printf("Column 2: ");
    scanf("%d", &c2);
    printf("Enter the dimension of matrix 3: \n   Row 3: ");
    scanf("%d", &r3);
    printf("Column 3: ");
    scanf("%d", &c3);
    printf("\n");

    if(c1!=r2 | c2!=r3){
        printf("Invalid dimensions! The matrices cannot be multiplied!\n");
        printf("For a successful multiplication (Column 1 = Row 2) & (Column 2 = Row 3).\n");
        return 0;
    }

    int A[r1][c1];
    int B[r2][c2];

    matrixMultiply(A[r1],B[c1]);

    return 0;

}

void matrixMultiply(int mat1[10][10],int mat2[10][10]){
     int i,j,mat3[10][10],k,sum,C[10][10],D[10][10];

     printf("Enter Matrix 1: \n");
     for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("Matrix 1 [%d][%d]: ",i,j);
            scanf("%d", &mat1[i][j]);
        }
     }
     printf("\nEnter Matrix 2: \n");
     for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("Matrix 2 [%d][%d]: ",i,j);
            scanf("%d", &mat2[i][j]);
        }
     }
      printf("\nEnter Matrix 3: \n");
    for(i=0;i<r3;i++){
        for(j=0;j<c3;j++){
            printf("Matrix 3 [%d][%d]: ",i,j);
            scanf("%d", &mat3[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            sum = 0;
            for(k=0;k<c1;k++){
                sum += mat1[i][k]*mat2[k][j];
            }
            C[i][j] = sum;
        }
    }
     for(i=0;i<r1;i++)
    {
        for(j=0;j<c3;j++)
        {
            sum = 0;
            for(k=0;k<c2;k++){
                sum += C[i][k]*mat3[k][j];
            }
            D[i][j] = sum;
        }
    }
        printf("\nThe multiplication of the three matrices is of dimension [%d x %d] and is:\n",r1,c3);

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c3;j++)
        {
         printf("%8d ",D[i][j]);
        }
         printf("\n");
    }
}








