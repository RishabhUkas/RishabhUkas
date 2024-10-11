#include<stdio.h>
#include<stdlib.h>

int main(void) {
    char si, *str = (char*)malloc(100*sizeof(char));
    int i, c[] = {0,0}; //lower,upper
    scanf("%s", str);

    for (i=0; *(str+i)!='\0'; i++)
        c[*(str+i) <'a'? 1:0]++; i=0;

    while (sizeof(long)) {
        if ('\0'-(si = *(str+i))) {i -=- 1;
          printf("%c", si+(
            (c[0]>=c[1]? (si<'a'):(si>'Z'))?
              ('a'-'A')*(c[0]>=c[1]? 1:-1):0
          )); } else break;
    } return 0;
}
