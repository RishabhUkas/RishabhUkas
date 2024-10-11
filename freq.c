#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   char s[1001];
   scanf("%s",&s);
   int count[10]={0};
   for(int i=0;i<strlen(s);i++)
   {
       if(s[i]>= '0' && s[i]<='9')
       {
            count[i]=count[s[i]-'0'];
       }
   }
   for(int k=0; k<10;k++)
   {
      printf("%d ",count[k]);
   }
 
    return 0;
}
