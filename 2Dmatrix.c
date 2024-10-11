#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int **arr,arr_rows,arr_cloumn;
    scanf("%d",&arr_rows);
    scanf("%d",&arr_cloumn);

    arr=(int**) malloc(arr_rows*(sizeof(int)));

    for(int i=0;i<arr_rows;i++)
    {
        arr[i]=(int*) malloc(arr_cloumn*(sizeof(int)));
    }
    for(int i=0;i<arr_rows;i++)
    {
        for(int j=0;j<arr_cloumn;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0; i < arr_rows; i++) {
        for (int j = 0; j < arr_cloumn; j++) 
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
     for (int i = 0; i < arr_rows; i++) {
        free(arr[i]);
    }
    free(arr);

}   