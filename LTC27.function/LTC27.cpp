#include "stdio.h"
#include "math.h"

int kiem_tra_SNT(int x){
	if(x<=1)
		return 0;

	for(int i =2;i<=x-1;i++){
		if(x%i==0)
			return 0;
	}
	return 1;
}

int main() {
	//Nhap lieu
	int n;
	printf("nhap vao n= ");
	scanf("%d",&n);
	
	//Goi ham
	int kt = kiem_tra_SNT(n);
	
	//xu ly va xuat ket qua
	if(kt==1){
		printf("La so nguyen to");
	}else {
		printf("Khong phai la so nguyen to");
	}
}
