#include<stdio.h>

void upr(char a[],char b[]){//小文字アルファベットを大文字アルファベットに変換する。
    int i=0;

    do{
        if('a'<=a[i] && a[i]<='z')
           b[i]=a[i]-('a'-'A');
        else
           b[i]=a[i];
    }while(a[i++]!='\0');
}


void main(void){
    char dat[80],result[80];
    printf("moji?");scanf("%s",dat);
    upr(dat,result);
    printf("%s\n",result);
    
}
