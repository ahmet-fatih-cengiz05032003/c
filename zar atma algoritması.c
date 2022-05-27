#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

void zar(){
	
	int i;
		for(int j=0; j<2; j++){
	
			i = rand() % 6;
			printf("%d \n",i + 1);
	
		}
		
}


int main(){
setlocale(LC_ALL, "Turkish");
		
	srand( time(NULL) );
	zar();
	
	
	return 0;
}
