#include<stdio.h>
#include<string.h>

int main()
{
	
	char ad[20];
	
	printf("isminizi giriniz: ");
	scanf("%s",ad);
	
	printf("%s isminiz %d uzunlugundadir.",ad,strlen(ad));
	
	if(strlen(ad)<10)
	{
		printf("\nisminiz %d'den daha fazla olmalidir.",strlen(10));
	}
	
	
	
	
	
	
	return 0;
}
