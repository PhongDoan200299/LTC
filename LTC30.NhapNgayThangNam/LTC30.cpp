//#30
#include "stdio.h"

int soNgayCuaThang(int thang,int nam){
	switch(thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			return ((nam % 400 == 0)||(nam % 4 == 0 && nam % 100 != 0)) ? 29:28;
		default:
			return -1;
	}
}

int ngayTrongNam(int ngay, int thang, int nam){
	int ntn = 0;
	for(int i = 1;i < thang; i ++){
		ntn += soNgayCuaThang(i, nam);
	}
	ntn += ngay;
	return ntn;
}

int inNgayTruocDo(int ngay, int thang,int nam){
	if(ngay == 1){
		if(thang == 1){
			ngay= 31;
			thang = 12;
			nam --;
		} else {
			thang --;
			ngay = soNgayCuaThang(thang,nam);
		}
	} else {
		ngay --;
	}
	
	printf("\n Ngay truoc do: %d/%d/%d",ngay,thang,nam);
}

int inNgaySauDo(int ngay, int thang, int nam){
	int nct = soNgayCuaThang(thang,nam);
	//so ngay cua thang quy dinh ngay cuoi cung cua thang.
	// neu ngay 31 thif la ngay cuoi cung cua thang  trung vs so ngay cua 1 thang
	if(ngay == nct){
		if(thang == 12){
			ngay = 1;
			thang = 1;
			nam ++;
		}else {
			ngay =1 ;
			thang ++;		
		}
	}else {
		ngay ++;
	}
	printf("\n Ngay ke do: %d/%d/%d", ngay,thang,nam);
}

int main(){
	int ngay,thang, nam;
	do{
		printf("Nhap vao ngay thang nam: ");
		scanf("%d%d%d", &ngay,&thang,&nam);
	}while(ngay < 1|| ngay > 31 || thang < 1 || thang > 12 || nam <1); 
	
	// Cau a, tim ra so ngay trong thang
	printf("\n So ngay cua thang: %d", soNgayCuaThang(thang,nam));
	// Cau b, ngay thu bao nhieu trong nam
	printf("\n Ngay trong nam: %d", ngayTrongNam(ngay, thang, nam));
	// Cau c, tim ngay truoc ngay vua nhap
	inNgayTruocDo(ngay,thang,nam);
	// Cau d, tim ngay sau ngay vua nhap
	inNgaySauDo(ngay,thang,nam);
}
