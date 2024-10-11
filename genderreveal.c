// if the number of distinct characters in one's user name is odd, then he is a male, otherwise she is a female.
#include <stdio.h>
#include<string.h>
int main()
{
    char s[105];
    scanf("%s",&s);
    int len = strlen(s);
    char ss[len+1];
    int count=0;

    for(int i=0;i<len;i++)
    {
       for(int j=i+1;j<len;j++)
       {
          if(s[i]!=s[j])
          {
             count+=1;
          }
       }
    }
    if (count%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
}