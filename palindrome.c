#include<stdio.h>

int palindrome(int x)
{
    int rev=0,temp=x,dig;
    while(temp!=0)
    {
        dig=temp%10;
        rev=rev*10+dig;
        temp=temp/10;
    }
    if (rev==x)
    {
        printf("%d\n",x) ;
    }
    
}
int main()
{
    for(int i=10;i<1000;i++)
    {
        palindrome(i);
    }

}