#include<stdio.h>
#include<locale.h>

int fact(int x){
	if( x == 1 )
		return 1;
	else 
		return(x * fact(x-1) );
}


int main(){
setlocale(LC_ALL, "Turkish");
	
	int x;
	printf("L�tfen fakt�riyelini almak sitedi�iniz say�y� girin: ");
	scanf("%d",&x);
	
	printf("%d",fact(x));
	
	return 0;
}
