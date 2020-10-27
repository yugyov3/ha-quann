#include <stdio.h>
int main(){
    int x;
    do{
        printf("nhap 1 so nguyen duong: ");
        scanf("%d",&x);
    }while(x<=2);
    int a=0,b=1,c=1;
    for(int i=3;i<x;i++){
        a=b;
        b=c;
        c=a+b;}
    printf("so thu %d trong day Fibonaxi: %d\n",x,c);
}
