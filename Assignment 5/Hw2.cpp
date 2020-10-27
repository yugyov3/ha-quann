#include <stdio.h>
int main(){
    int x;
    do{
        printf("Nhap 1 so nguyen duong: ");
        scanf("%d",&x);
    }while(x<=2);
    int a=0,b=0,c=1;
    for(int i=3;b+c<=x;i++){
        a=b;
        b=c;
        c=a+b;}
    printf("So trong day Fibonaci thoa man yeu cau: %d",c);
}
