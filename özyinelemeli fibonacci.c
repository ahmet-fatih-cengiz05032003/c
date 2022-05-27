#include<stdio.h>
#include<locale.h>

int fibonacci(int x){
	
	if(x == 0 || x == 1)
		return x;
	else
		return (fibonacci(x-1) + fibonacci(x-2) );
}

int main(){
setlocale(LC_ALL, "Turkish");
	
	int fibo;
	printf("Lütfen fibonacci dizisinin kaçýncý elemanýný görmek istediðinizi girin");
	scanf("%d",&fibo);
	
	printf("Fibonacci dizisinin ilk %d. elemaný: %d", fibo , fibonacci(fibo) );
	
	return 0;
}
