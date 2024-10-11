#include <stdio.h>
#include <stdlib.h>


int main()
{
    
    int n,temp,bit;
    scanf("%d",&n);
    temp=n;
    int rev=0;
    while(temp>0)
    {
        
        bit=temp%2;
        temp=temp/2;
        rev=rev*10+bit;

    }
    printf("\n%30d",rev);
}