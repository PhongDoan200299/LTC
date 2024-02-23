//LTC42
#include <stdio.h>

void nhapMang(int x[100],int &n){
	do{
		printf("Nhap vao so luong phan tu (0<n<=100): ");
		scanf("%d", &n);
	}while(n<1 || n >100);
	
    for(int i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &x[i]);
    }
}

void xuatMang(int x[100], int n){
	printf("gia tri cua mang la: ");
	for(int i = 0;i < n;i++){
		printf("%d ", x[i]);
	}
}

//int timKiem(int x[100], int n, int tk){
//	int kq = 0;
//	for(int i = 0;i<n;i++){
//		if(x[i] == tk){
//			return 1;
//		}
//	}
//	return kq;
//}

//void thucHienTimKiem(int x[100],int n){
//	int tk;
//	printf("nhap vao gia tri can tim : ");
//	scanf("%d", &tk);
//	int kq = demSoLanXuatHien(x, n, tk);
//	if(kq == 1){
//		printf("\n Tim thay!");
//	} else {
//		printf("\n Khong tim thay!");
//	}
//}

int demSoLanXuatHien(int x[100],int n, int so){
	int count = 0;
	for(int i = 0; i < n;i++){
		if(x[i] == so){
			count ++;
		}
	}
	return count;
}

void thucHienTimKiem(int x[100],int n){
	int so;
	printf("nhap vao gia tri can tim : ");
	scanf("%d", &so);
	int kq = demSoLanXuatHien(x, n, so);
	int count = demSoLanXuatHien(x, n, so);
	printf("\n So lan xuat hien cua %d la: %d",so, count);
}




int main(){
	int a[100];
	int n;
	int x;
	nhapMang(a, n);
	xuatMang(a, n);
	printf("\n");
	thucHienTimKiem(a,n);
	return 0;
}
