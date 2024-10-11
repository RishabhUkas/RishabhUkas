#include <stdio.h>

int factorial(int x)
{
    int fact=1;
    if(x==0 || x==1)
    {
        return 1;
    }
    else
    {
        return x*factorial(x-1);
    }
    
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",factorial(n));
}