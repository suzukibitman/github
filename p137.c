#include<stdio.h>

#define N 8

void main(void){//基本選択方法によるソート
    static int a[]={100,55,65,33,211,66,31,90};
    int j,k,min,s,dumy;
    for(k=0;k<N;k++){
        min=a[k];//ここで最小を今の数と決める。
        s=k;//ここで　最小と思われる順番を入れてるはず。
        for(j=k+1;j<N;j++){
            if(a[j]<min){
                min=a[j];
                s=j;//ここで最小と思われる順番を入れ替える。　中身を入れ帰ったあとに！
            }
        }

    dumy=a[k];//ここで中身をチェンジする。
    a[k]=a[s];
    a[s]=dumy;
    }   
    for(k=0;k<N;k++)printf("%5d",a[k]);

}
