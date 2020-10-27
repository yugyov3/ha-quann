#include <stdio.h>
int main() {
    int a = 0;
    for(int n=1;n<=100;n++){
        a=a+(2*n-1);
    }
    printf("Tong 100 so le dau tien S = %d", a);
}
