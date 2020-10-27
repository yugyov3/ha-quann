#include <stdio.h>
int main(){
    int a;
    printf("Nhap so nguyen duong: ");
    scanf("%d",&a);
    int x = 0;
    if(a!=0){
        x = x*10 + a%10;
        a /=10;
    }
    if(a!=0){
        x = x*10 + a%10;
        a /=10;
    }
    if(a!=0){
        x = x*10 + a%10;
        a /=10;
    }
    if(a!=0){
        x = x*10 + a%10;
        a /=10;
    }
    printf("So dao nguoc la: %d\n",x);
}
