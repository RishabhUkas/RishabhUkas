#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    // Write the logic to reverse the array. 
    for(i=0;i< num/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[num-i-1];
        arr[num-i-1]=temp;
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i)); 
        
        */


    int *a ,*b,pA=0,pB=0;
    a = (int*) malloc(3*sizeof(int));
    b = (int*) malloc(3*sizeof(int));
    for(int i=0;i<3;i++)
    {
        scanf("%d",a+i);
    }
    for(int i=0;i<3;i++)
    {
        scanf("%d",b+i);
    }
    for(int k=0;k<3;k++)
    {
        if(a[k]>b[k])
        {
            pA++;
        }
        else if (a[k]<b[k])
        {
            pB++;
        }
       
    }
    printf("%d %d",pA,pB);






    return 0;
}