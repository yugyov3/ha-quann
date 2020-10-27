#include <stdio.h>
int main(){
    int a;
    printf("Nhap 1 so chuoi: ");
    scanf("%d",&a);
    char ars[a][20];
    for(int i=0; i<a;i++){
        printf("Nhap chuoi %d: ",i);
        scanf("%s",ars[i]);
    }
    printf("Nhung chuoi vua nhap: \n");
    for (int i=0; i<a; i++){
        printf("%s\n", ars[i]);
        }
    for(int i=0; i<a-1; i++){
        for(int j=0; j<a-i-1; j++){
            if (strcmp(ars[j],ars[j+1])==0){
            printf("Chuoi tuong duong: %c", ars[i][j]);
            }else{
                if (strcmp(ars[j],ars[j+1])<0){
                printf("%s\n%s", ars[j], ars[j+1]);
                }else{
                    printf("%s\n%s", ars[j+1], ars[j]);
                }
            }
        }
    }
}
