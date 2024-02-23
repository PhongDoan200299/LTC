//37
#include "stdio.h"

float trungBinhCong(int x[], int n){
	int tong = 0;
	for(int i = 0; i<n;i++){
		tong += x[i];
	}
	return (float)tong/n;
}

float trungBinhCongSoDUong(int x[],int n){
	int tong = 0;
	int soLuongSoDUong = 0;
	for(int i = 0;i<n;i++){
//		if(x[i] < 0){
//			return i++;
//		} else {						
//			tong += x[i];
//			soLuongSoDUong++;	
//		}
		if(x[i] >= 0){
			tong+= x[i];
			soLuongSoDUong++;
		}
	}
	return soLuongSoDUong>0?(float)tong/soLuongSoDUong:-1;
}

int main(){
	int a[100];
	int n;
	do{
		printf("Nhap vao so luong phan tu (0<n<=100)");
		scanf("%d", &n);
	}while(n<1 || n > 100);
	
	for(int i = 0;i < n;i++){
		printf("\na[%d] = ", i);
		scanf("%d", &a[i]);
	}
	printf("\nTrung binh cong : %.2f", trungBinhCong(a,n));
	
	float tbcsd = trungBinhCongSoDUong(a,n);
	if(tbcsd > 0){
		printf("\nTrung binh cong so duong: %.2f", tbcsd);
	} else {
		printf("\n Mang khong co so duong");
	}
}
