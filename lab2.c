#include<stdio.h>
#include<string.h>

int ortalamabul(s1,s2,s3,s4,s5)
{
	int ortalama;
	
	ortalama = (s1+s2+s3+s4+s5)/5;
	
	return (ortalama);
}



int main()
{
	
	int sayilar[5];
	int i;
	
	for(i=0; i<5; i++)
	{
		printf("%d. sayiyi giriniz: ",i+1);
		scanf("%d",&sayilar[i]);
	}
	
	for(i=0; i<5; i++)
	{
		printf("%d ",sayilar[i]);
	}
	
	printf("\nOrtalama: %d",ortalamabul(sayilar[0],sayilar[1],sayilar[2],sayilar[3],sayilar[4]));
	
	return 0;
}
