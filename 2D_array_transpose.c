#include <stdio.h>

int main (){
    int i,j,row,column;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &column);

    int arr[row][column],transpose[column][row];
    printf("Enter the elements of the matrix: \n");

    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Original matrix: \n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose: \n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            transpose[j][i]=arr[i][j];
        }
    }
for(i=0;i<column;i++){
        for(j=0;j<row;j++){
        printf("%d\t", transpose[i][j]);

}
printf("\n");
}
}
