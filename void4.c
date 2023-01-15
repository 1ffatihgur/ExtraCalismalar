#include<stdio.h>
#define n 5


void maksbul(int dizi[],int boyut)
{
	
	int maks=0;
	int i;
	
	for(i=0; i<boyut; i++)
	{
		printf("%d. elemani giriniz: ",i+1);
		scanf("%d",&dizi[i]);
		
		if(dizi[i] > maks)
		{
			maks = dizi[i];
		}
	}
	
	printf("en buyuk sayi %d",maks);
	
	
}


int main()
{
	
	int MaksBul[n];
	maksbul(MaksBul,n);
	
		
	return 0;
}
