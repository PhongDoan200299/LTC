//34
#include <stdio.h>

int fibonnaci(int x){
	if(x == 0){
		return 0;
	}else if(x == 1){
		return 1;
	}else if(x == 2){
		return 1;
	}else 
		return fibonnaci(x-1) + fibonnaci(x-2);
}

int main(){
	int n;
	do{
		printf("Nhap vao n: ");
		scanf("%d", &n);
	} while(n<0);
	printf("Fibonnaci(%d) = %d", n, fibonnaci(n));
}
