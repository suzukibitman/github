#include<stdio.h>

int isum(int b[]){
    int s,i;

    s=i=0;
    while(b[i]!=-999)s=s+b[i++];
        return(s);
    }

void main(void){
    static int a[]={1,2,3,4,5,6,7,8,9,10,-999};
    
    printf("goukei=%d /n",isum(a));
    
    }
