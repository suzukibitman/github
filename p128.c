#include<stdio.h>

void main(void){
    int c;
    c=getchar();
    switch(c){
        case 'b':
        case 'B':printf("basici\n");
                 break;
        case 'f':
        case 'F':printf("fortran\n");
                 break;
        case 'p':
        case 'P':printf("pascal\n");
                 break;
        default :printf("??\n");
                 break;
    }

}
