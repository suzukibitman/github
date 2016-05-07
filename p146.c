#include<stdio.h>
void main(void){//前置き演算と後ろ置き演算
    int i,counta=0,countb=0;

    printf("    counta++    ++countb\n");
    for(i=0;i<5;i++){
        printf("%10d%10d\n",counta++,++countb);
        
    }

}
