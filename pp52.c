#include<stdio.h>

void main(void){
    char c;
    c=getchar();
    if('A'<=c && c<='Z')
        c=c-('A'-'a');
    putchar(c);

}
