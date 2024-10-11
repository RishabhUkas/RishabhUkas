#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,*candles,count=0;
    scanf("%d",&n);
    candles=(int*) malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",candles+i);
    }
    int max = candles[0];
   
    for(int k=0;k<n;k++)
    {
        if(max<=candles[k])
        {
            max=candles[k];
            
        }
    }
    for(int k=0;k<n;k++)
    {
        if(max==candles[k])
            {
                count++;
            }
    }
    printf("%d",count);



}
