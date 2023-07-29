#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sayi,i;
	printf("Sayiyi Girin: ");
	scanf("%d", &sayi);
	
	for(i=1;i<=sayi;i++)
	{
		if(sayi%i==0)
		{
			printf("%d\n",i);
		}
	}
	
	return 0;
}
