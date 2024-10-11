#include<stdio.h>
 
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
    int x,y,min,max;
       scanf("%d %d",&x,&y);
        min =x;
        max=x;
        if(min>y)
        {
            min=y;
        }
        if(max<y)
        {
            max=y;
        }
        printf("%d %d\n",min,max);
    }
}