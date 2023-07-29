#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Bir bakteri türü her saat basi kendini ikiye bölerek çoðalmaktadir. 24 saat sonra kaç adet bakteri olur?
	
	int sayi=1;
	int i;
	
	for(i=1;i<=24;i++)
	{
		sayi=sayi*2;
	}
	printf("%d",sayi);
	return 0;
}
