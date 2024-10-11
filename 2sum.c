#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,*nums,target,val;
    int temp[2]={};
    scanf("%d",&n);
    nums = (int*) malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",nums+i);
    }
    scanf("%d",&target);
    
    for(int i=0;i<n;i++)
    {
       for(int j=i+1;j<n;j++)
       {
            if(nums[i]+nums[j]==target)
            {
                temp[0]=i;
                temp[1]=j;
            }
       }
    }

    printf("%d %d",temp[0],temp[1]);



}