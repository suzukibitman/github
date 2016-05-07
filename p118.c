#include<stdio.h>
#include<string.h>

char *reverse(char a[]){/*文字逆転の関数a*/
    static char static buf[80];
    int i,n;
    n=strlen(a);

    for(i=0;i<n;i++)buf[i]=a[n-i-1];
    buf[n]='\n';
    return(buf);


}
void main(void){
    char str(80);
    printf("moji ?");scanf("%s",str);

    printf("%s\n",reverse(str));
    
}
