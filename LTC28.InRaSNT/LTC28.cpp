#include<stdio.h>
#include<math.h>

int kiem_tra_SNT(int x){
	if(x<=1)
		return 0;
	
	for(int j=2;j<=sqrt(x);j++){
		if(x%j==0)
			return 0;
	}
	return 1;
}

int main(){
	int n;
	do{
		printf("Nhap nao so nguyen n: ");
		scanf("%d", &n);
	}while(n<1);
	
	for(int i=2;i<=n;i++){
		if(kiem_tra_SNT(i)){
			printf("%d",i);
		}
	}
}
