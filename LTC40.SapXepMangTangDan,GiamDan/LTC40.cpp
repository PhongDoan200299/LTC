//LTC40
#include "stdio.h"

void swap(int &a, int &b){
	int tam = a;
	a = b;
	b = tam;
}

void sapXepTang(int x[], int n){
	for(int i = 0; i < n - 1; i++){
		int viTriNhoNhat = i;
		for(int j = i + 1; j < n; j++){
			if(x[j] < x[viTriNhoNhat])
				viTriNhoNhat = j;
		}
		swap(x[i],x[viTriNhoNhat]);
	}
}

void sapXepGiam(int x[], int n){
	for(int i = 0; i < n - 1; i++){
		int viTriLonNhat = i;
		for(int j = i + 1; j < n; j++){
			if(x[j] > x[viTriLonNhat])
				viTriLonNhat = j;
		}
		swap(x[i],x[viTriLonNhat]);
	}
}

void printMang(int x[], int n){
	for(int i = 0; i <n; i++){
		printf("\n%d", x[i]);
	}
}

int main(){
	int a[100],n;
	do{
		printf("Nhap vao so luong phan tu (0 < n <= 100): ");
		scanf("%d", &n);
	}while(n < 1 || n > 100);
	
	for(int i = 0;i < n;i++){
		printf("a[%d] = ",i);
		scanf("%d", &a[i]);	
	}
	
	printf("\n Mang tang dan: ");
	sapXepTang(a, n);
	printMang(a,n);

	printf("\n Mang giam dan: ");
	sapXepGiam(a, n);
	printMang(a,n);
}
