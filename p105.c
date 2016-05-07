#include<stdio.h>

void func(void)//局所的変数の例
{
    int i;
    for(i=0;i<=3;i++)printf("\t func...i=%d \n",i);
    
   
}

void main(void){
    int i;
    for(i=0;i<=3;i++){
        printf("main...i=%d \n",i);

        func();
    }

}
