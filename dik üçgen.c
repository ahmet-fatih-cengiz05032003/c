#include<stdio.h>

int main(){
	
	int s, k,giris;
	int yildiz = 1;

	printf("Giris");
	scanf("%d",&giris);

	for (s=0;s<giris;s++){
		for(k=0;k<yildiz;k++){
			printf("* ");
		}
		printf("\n");
		yildiz ++;
	}
	
	
	return 0 ;
}
