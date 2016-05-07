#include<stdio.h>

void setw(int b[][5],int dat){
    int j,k;
    for(j=0;j<5;j++)
    
        for(k=0;k<5;k++)
            b[j][k]=dat; 
} 
void main(void){


    int a[5][5];
    int j,k;

    setw(a,1);
    for(j=0;j<5;j++){
        for(k=0;k<5;k++)printf("%2d",a[j][k]);
        printf("\n");
    }

}

/* result
 * 11111
 * 11111
 * 11111
 * 11111
 * 11111
 */
