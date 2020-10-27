#include <stdio.h>
int main(){
    int a,b;
    printf("Nhap so nguyen duong a: ");
    scanf("%d",&a);
    printf("Nhap so nguyen duong b: ");
    scanf("%d",&b);
    for(int i=a;true;i++){
        if(i%a==0&&i%b==0){
            printf("Boi chung nho nhat la: %d",i);
            break;
        }
    }
}
