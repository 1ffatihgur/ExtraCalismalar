#include <stdio.h>
#include <string.h>

void yazdir(int dizimiz[], int size)
{
	int i;
	int maks1=0;
	int maks2=0;
	
	for(i=0; i<size; i++)
	{
		if(dizimiz[i] > maks1)
		{
			maks1=dizimiz[i];
		}
		else if(dizimiz[i] > maks2 && maks2!=maks1)
		{
			maks2 = dizimiz[i];
		}
	}
	
	printf("\nen buyuk sayi: %d\n",maks1);
	printf("en buyuk ikinci sayi: %d",maks2);
}


int main()
{
	
	int sayilar[10];
	int i;
	
	for(i=0; i<10; i++)
	{
		printf("%d. sayiyi giriniz: ",i+1);
		scanf("%d",&sayilar[i]);
	}
	
	for(i=0; i<10; i++)
	{
		printf("%d ",sayilar[i]);
	}
	
	yazdir(sayilar,10);
	
	return 0;
}
