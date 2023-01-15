#include<stdio.h>
#include<string.h>

void terscevir(char array[])
{
	int uzunluk = strlen(array);
	int i;
	
	for(i=uzunluk; i>=0; i--)
	{
		printf("%c",array[i]);
	}
	
}


int main()
{

	char dizi[30];

	printf("bir þeyler yazin: ");
	gets(dizi);
	
	terscevir(dizi);



	return 0;
}
