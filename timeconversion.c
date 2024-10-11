#include<stdio.h>
#include<string.h>



void main()
{
    char s[15];
    scanf("%s",&s);
    int hrs,min,sec;
    char period[3];

    sscanf(s , "%d:%d:%d%s",&hrs, &min,&sec, period);
    if(strcmp(period,"AM")==0)
    {
        if(hrs==12)
        {
            hrs=00;
        }
    }
    else if(strcmp(period,"PM")==0)
    {
        if(hrs!=12)
        {
            hrs=hrs+12;
        }
    }

    printf("%02d:%02d:%02d",hrs,min,sec);


}
