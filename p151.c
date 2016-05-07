#include<stdio.h>

void main(void){//カンマ演算子
    int dat,sum=0;
    while(printf("data?"),scanf("%d",&dat)!=EOF){
        sum=sum+dat;
        printf("sum=%d",sum);
    }

}
