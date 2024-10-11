#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,*arr,fib=1;
    scanf("%d",&n);
    arr = (int*) malloc(n*sizeof(int));
    for(int i=0;i<n-1;i++)
    {
        arr[i] = fib; 
        arr[i+1]=arr[i]+(arr[i]-1);
    }
    for(int k=0;k<n;k++)
    {
        printf("%d ",*arr+k);
    }
    
}