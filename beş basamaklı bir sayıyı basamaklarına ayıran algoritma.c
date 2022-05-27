//5 basamaklı bir sayıyı basamaklarına ayırabilen algoritma.
#include<stdio.h>
#include<locale.h>



int main(){
setlocale(LC_ALL, "Turkish");
	
		digit[0] = number / 10000;
		number = number - 10000 * digit[0];
		
		digit[1] = number / 1000;
		number = number - 1000 * digit[1];
		
		digit[2] = number / 100;
		number = number - 100 * digit[2];
		
		digit[3] = number / 10;
		number = number - 10 * digit[3];
		
		digit[4] = number;
	
	return 0;
}
