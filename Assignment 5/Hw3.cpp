#include <stdio.h>
int main(){
    int a,b;
    int i;
    do{
        printf("Nhap so nguyen duong a: ");
        scanf("%d",&a);
    }while(a<=0);
    do{
        printf("Nhap so nguyen duong b: ");
        scanf("%d",&b);
    }while(b<=0);
    if (a<=b){
        for (i=1;i<=a;i++){
            a%i==0;
            b%i==0;}
            printf("Uoc chung lon nhat la: %d\n", i);
    }else{
        for (i=1;i<=b;i++){
            a%i==0;
            b%i==0;}
            printf("Uoc chung lon nhat la: %d\n", i);
    }
}

