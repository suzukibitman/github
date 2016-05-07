#include<stdio.h>

void bitpat(int x)//ビットパターンの表示
{
    int i;

    for(i=15;i>=0;i--)printf("%d",(x>>i) & 0x001);
    printf("\n");

}

void main(void){
    int a;
    while(scanf("%d",&a)!=EOF)bitpat(a);
    
    
}
