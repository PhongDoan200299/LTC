#include "stdio.h"

//void xuatMangNguoc(int x[100], int n){
//	printf("\ngia tri cua mang dao nguoc: ");
//	for(int i = n-1; i >= 0; i--){
//		printf("%d ", x[i]);
//	}
//}

void daoNguocMang(int x[100], int n){
	for(int i = 0; i <= n/2;i++){
		int temp = x[i];
		x[i] = x[n-i-1];
		x[n-i-1] = temp;	
	}
}

void printMang(int x[], int n){
	printf("\ngia tri cua mang : ");
	for(int i = 0;i < n;i++){
		printf("\%d ", x[i]);
	}
}

int main(){
	int a[100], n;
	do{
		printf("Nhap vao so luong phan tu: ");
		scanf("%d", &n);
	}while (n<1 || n > 100);

	for(int i = 0; i < n;i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}

	printMang(a,n);
//	xuatMangNguoc(a , n);
	daoNguocMang(a,n);
	printMang(a,n);
}
