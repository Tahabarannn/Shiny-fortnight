#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Klavyeden 4 tane tam sayi alip bunlarin toplamini bulan program yazin
	
	int i;
	int toplam;
	int sayi;
	for(i=1;i<=4;i++)
	{
		printf("%d.Sayi: ",i);
		scanf("%d",&sayi);
		toplam=toplam+sayi;
	}
	
	printf("Toplam Sonuc: %d", toplam);
	 
	return 0;
}
