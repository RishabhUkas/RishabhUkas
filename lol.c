#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int main()
{
    /*int n;
    long long int *ar,sum=0;
    scanf("%d",&n);
    ar = (long long int*) malloc(n* sizeof(long long int));
    for(int i=0;i<n;i++)
    {
        scanf("%lld",ar+i);
    }
    for(int k=0;k<n;k++)
    {
        sum=sum+ar[k];
    }
    printf("%lld",sum);*/

    int n,*arr;
    float avg;
    int temp[3]={0};
    scanf("%d",&n);
    arr= (int*) malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for (int k=0;k<n;k++)
    {
        if(arr[k]>0)
        {
            temp[0]++;
        }
        else if(arr[k]<0)
        {
            temp[1]++;
        }
        else
        {
            temp[2]++;
        }
    }
    for(int l=0;l<3;l++)
    {
        avg=(float)temp[l]/n;
        printf("%.6f\n",avg);
    }
    free(arr);


}