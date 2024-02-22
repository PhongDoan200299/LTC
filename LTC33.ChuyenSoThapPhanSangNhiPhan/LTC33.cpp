//33
#include "stdio.h"

C1
void printNhiPhan(int x){
	if(x == 0){
		return;
	} else {
		int r = x%2;
//		printf("/n%d",x);
		printNhiPhan(x/2);
		printf("%d", r);
	}
}

//C2

long printNhiPhan(int x){
	long 
}


int main(){
	int n;
	do{
		printf("Nhap n tu ban phim: ");
		scanf("%d",&n);
	} while(n<0);
	printNhiPhan(n);
}
