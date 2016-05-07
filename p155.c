#include<stdio.h>

#define N 13
void main(void){//代入演算子による　二分探索
    static int a[]={5,8,15,21,33,36,41,55,76,79,80,85,90};
    int x,key,
        low=0,
        upper=N-1;

    printf("date ?");scanf("%d",&key);

    while(low<=upper){
        if(a[x]==key){
            printf("%d 番:%d\n",x+1,a[x]);
            break;
        
        }
        if(a[x]<key)low=x+1;
        else upper=x-1;
    }
            

}
