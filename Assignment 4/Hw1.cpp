#include <stdio.h>
int main() {
    int n;
    do{
        printf("nhap vao 1 nguyen duong: ");
        scanf("%d",&n);
    }while(n<=0);
    int s = 0;
    for(int i=1;i<=n;i++){
        s = s+i;
    }
    printf("S = %d\n", s);
}
