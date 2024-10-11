#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int grades,grade,result=0;
    printf("Enter grades:");
    scanf("%d",&grades);

    grade= 5*(floor((double)grades/5)+1);

    if((grade-grades)<3 && grades>=38)
    {
        result=grade;
    }
    else 
    {
        result =grades;
    }
    
    printf("%d\n",result);


}
