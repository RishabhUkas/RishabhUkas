#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    int s,t,a,b,m,n,ac=0,oc=0;


    scanf("%d %d",&s,&t);
    scanf("%d %d",&a,&b);
    scanf("%d %d",&m,&n);  
    int apple_count[m],orange_count[n];
    int* apple = (int*) malloc(m*(sizeof(int)));
    int* orange = (int*) malloc(n*(sizeof(int)));
    for(int i=0;i<m;i++)
    {
        scanf("%d",apple+i);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",orange+i);
    }

    //apple count:
    for(int k=0;k<m;k++)
    {
        apple_count[k]=a+apple[k];
        
    }
    for(int k=0;k<m;k++)
    {
        if(s<=apple_count[k] && apple_count[k]<=t)
        {
            ac+=1;
            
        }
    
    }
    printf("%d\n",ac);

    //orange count:
    for(int k=0;k<n;k++)
    {
        orange_count[k]=b+orange[k];
    }
    for(int k=0;k<n;k++)
    {
        if(s<=orange_count[k] && orange_count[k]<=t)
        {
            oc+=1;
        }

    }
    printf("%d",oc);

}