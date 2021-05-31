#include <stdio.h>

int main (){
    int i,j,n,m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);
    int arr[n][m];

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Enter the elements in a[%d][%d]: ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The array is: \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){

            printf("  %d\t", arr[i][j]);
        }
        printf("\n");
    }
    int value,c=0;
    printf("Enter the number you want to search: ");
    scanf("%d", &value);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(arr[i][j]==value){
                printf("Value found in: arr[%d][%d]\n",i,j);
            }
            else{
                c=c+1;
            }
        }
    }
    if(c==(n*m)){
        printf("Value Not Found");
    }

    return 0;

}
