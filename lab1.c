#include<stdio.h>
#include<string.h>


int alanhesapla(kisakenar,uzunkenar)
{
	int alan=0;
	alan = kisakenar*uzunkenar;
	return(alan);
}



int main()
{
	
	int kisa,uzun;
	
	printf("Kisa kenar giriniz: ");
	scanf("%d",&kisa);
	
	printf("Uzun kenar giriniz: ");
	scanf("%d",&uzun);
	
	printf("Alan: %d",alanhesapla(kisa,uzun));
	
	

	return 0;
}
