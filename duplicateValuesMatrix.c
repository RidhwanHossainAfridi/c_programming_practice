#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int m,n,i,j,k=0,k1=0,flag,num2=1,count,l;

    printf("Enter the rows of the matrix: ");
    scanf("%d", &m);
    printf("Enter the columns of the matrix: ");
    scanf("%d", &n);

    int matrix[m][n],arr2[1000],x[1000],y[1000];

    printf("\n\nEnter the elements of the matrix: \n\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Element[%d][%d]: ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int *matrixptr = (int *)malloc(m*n*sizeof(int));
    matrixptr = &matrix;

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            x[num2] = i;
            y[num2] = j;
            num2++;
        }
    }

    for(i=0; i<m*n; i++)
    {
        for(j=0; j<m*n; j++)
        {
            flag = 0;
            if(i!=j && *(matrixptr+i) == *(matrixptr+j))
            {
                for(k1=0; k1<k; k1++)
                    if(arr2[k1] == *(matrixptr+j))
                    {
                        flag = 1;
                    }
                if(flag != 1)
                {
                    arr2[k++] = *(matrixptr+j);
                }
            }
        }
    }
    if(k != 0)
    {
        printf("\n\nThe duplicate value(s) are: \n\n");
        for(i = 0; i < k; i++)
        {
            printf("%d. %d in positions ",i+1,arr2[i]);
            count = 0;
            for(j=0; j<m*n; j++)
            {
                if(arr2[i] == *(matrixptr+j))
                {
                    count++;
                }
            }
            l =1;
            int a = count;
            for(j=0; j<m*n; j++)
            {
                if(arr2[i] == *(matrixptr+j) && l<count)
                {
                    printf("(%d,%d), ",x[j+1],y[j+1]);
                    l++;
                }
                else if(arr2[i] == *(matrixptr+j) && l==count)
                {
                    printf("and (%d,%d)",x[j+1],y[j+1]);
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("\n\nNo duplicates found!\n");
    }
    free(matrixptr);
    return 0;
}
