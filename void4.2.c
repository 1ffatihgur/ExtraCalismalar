#include<stdio.h>
#define n 5

void notlari_al(int notlar[],int boyut)
{
	
	int i;
	
	for(i=0; i<boyut; i++)
	{
		printf("%d. notu giriniz: ",i+1);
		scanf("%d",&notlar[i]);
	}
	
	for(i=0; i<boyut; i++)
	{
		printf("%d. not: %d\n",i+1,notlar[i]);
	}
	
}

double ortbul(int notlar[], int boyut)
{
	double ortalama, toplam=0;
	int i;
	
	for(i=0; i<boyut; i++)
	{
		toplam = toplam + notlar[i];
	}
	ortalama = toplam / boyut;
	
	printf("ortalama = %.2lf",ortalama);
	
	return ortalama;
}


int main()
{
	
	int notlariyaz[n];
	
	notlari_al(notlariyaz,n);
	
	ortbul(notlariyaz,n);
	
	
	
	return 0;
}
