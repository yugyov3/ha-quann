#include <stdio.h>

int main(){
	int n;
	printf("nhap n= ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap so arr[%d] ",i);
		scanf("%d",&arr[i]);
	}
	float t=0;
	for(int i=0;i<n;i++){
		t+=arr[i];
	}
	float tcb=t/n;
	printf("trung binh cong cua mang la %f",tcb);
}
