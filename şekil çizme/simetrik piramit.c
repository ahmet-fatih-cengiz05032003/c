#include<stdio.h>

int main(){
	
	int s, k, giris, bosluk;
	int yildiz;
	
	printf("Giris");
	scanf("%d",&giris);	
	
	yildiz = 1;
	bosluk = giris - 1;
	
	for (s=0;s<giris;s++){
		for(k=0;k<bosluk;k++){
			printf(" ");
		}
		
		for(k=0;k<yildiz;k++){
			printf("*");
		}
		printf("\n");
		bosluk --;
		yildiz += 2;
	}
	
	yildiz -= 4;
	bosluk = 1;
	
	for (s=0;s<giris-1;s++){
		for(k=0;k<bosluk;k++){
			printf(" ");
		}
		
		for(k=0;k<yildiz;k++){
			printf("*");
		}
		printf("\n");
		bosluk ++;
		yildiz -= 2;
	}
	
	
	
	return 0 ;
}
