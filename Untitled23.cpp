#include<stdio.h>
#include<string.h>





int main()
{
	
	char isim[30];
	int uzunluk;
	
	printf("bir isim gir: ");
	gets(isim);
	
	uzunluk = strlen(isim);
	printf("%s isminin uzunlugu = %d\n",isim,uzunluk);
	
	printf("ismin ters yazilisi: %s",strrev(isim));
	
	
	
	return 0;
}
