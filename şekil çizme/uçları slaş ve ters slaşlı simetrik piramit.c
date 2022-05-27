#include<stdio.h>

int main(){
	
	int s, k, giris, bosluk;
	int yildiz;
	
	printf("Giris");
	scanf("%d",&giris);	
	
	yildiz = 2;
	bosluk = giris - 1;
	
	for (s=0;s<giris;s++){
		for(k=0;k<bosluk;k++){
			
			printf(" ");
		}
		
		for(k=0;k<yildiz;k++){
			if(k==0)
				printf("/");
			else if(k==yildiz-1)
				printf("\\");
			else
				printf("*");
		}
		printf("\n");
		bosluk --;
		yildiz += 2;
	}
	
	yildiz -=  2;
	bosluk = 0;
	
	for (s=0;s<giris;s++){
		for(k=0;k<bosluk;k++){
			
			printf(" ");
		}
		
		for(k=0;k<yildiz;k++){
			if(k==0)
				printf("\\");
			else if(k==yildiz-1)
				printf("/");
			else
				printf("*");
		}
		printf("\n");
		bosluk ++;
		yildiz -= 2;
	}
	
	
	
	
	return 0 ;
}
