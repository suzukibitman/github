#include<stdio.h>
void main(void){//指定データで終わる データ入力を行い合計を求めるプログラムを作成。でーたの　終わりは−９９９９とする。
    int a,s;
    s=0;
    while(scanf("%d",&a),a!=-9999)s=s+a;
    printf("%d",s);


}


