#include <stdio.h>
int main() {
    int n;
    do{
        printf("nhap vao 1 so nguyen duong: ");
        scanf("%d",&n);
    }while(n<=0);
    float s = 0;
    for(int i=1;i<=n;i++){
        s = s + (float)1/i;
    }
    printf("S = %f\n", s);
}
