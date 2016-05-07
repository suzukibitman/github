#include<stdio.h>

int abs(int x)//絶対値 条件演算子ですよ＋
{
    return((x>0)? x: -x);
}


void main(void){
    printf("%d /n",abs(-100));

}
