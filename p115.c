#include<stdio.h>

void disp(char *p[]){//ここの書き方として、　アスタリスクと配列の引数
    int i=0;
    while(p[i]!=NULL){//使うときはそのままで大丈夫みたい！
        printf("%s\n",p[i]);
        i++;
    }
}

void main(void){
    static char *nam[]={"Candy","Nancy","EluzA","Ann","Rolla","Emy",NULL};
    static int *nam2[]={1,2,3,4,5,6,NULL};

    
    disp(nam);//書き方といて、送ってほしい配列を名前だけ書いて渡すこと！
    disp(nam2);
    

    

    
}
