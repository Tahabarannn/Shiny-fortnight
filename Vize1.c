#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sayac = 0;
	int i;
	int a,b,c;
	
	int sayi;
	
	for(i=100;i<=999;i++)
	{
		
		a=i/100;
		b=(i/10)%10;
		c=i%10;
		if(a!=b && a!=c && b!=c)
		{
			sayac++;
		}
	}
	printf("%d",sayac);
	 
	 
	return 0;
}
