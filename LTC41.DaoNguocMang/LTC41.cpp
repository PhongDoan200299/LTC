#include "stdio.h"

void printMang(int x[])

int main(){
	int a[100], n;
	do{
		printf("Nhap vao so luong phan tu: ");
		scanf("%d", &n);
	}while (1< n || n > 100)

	for(int i = 0; i < n;i++){
		printf("a[%d]", i);
		scanf("%d", &a[i]);
	}

}
