#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sayi,i;
	
	printf("Faktoriyelini bulmak istediginiz sayiyi girin!\n");
	scanf("%d", &sayi);
	
	for(i=1;sayi>=i;sayi--) {
		sayi=sayi*sayi;
			
		printf("%d", sayi);
	};
	

	
	
	return 0;
}
