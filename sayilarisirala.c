#include<stdio.h>

void ekle(int sayilar[],int boyut)
{
	int i,j;
	int temp;
	
	for(i=0; i<10; i++)
	{
		for(j=i+1; j<10; j++)
		{
			if(sayilar[i] > sayilar[j])
			{
				temp = sayilar[i];
				sayilar[i] = sayilar[j];
				sayilar[j] = temp; 
			}	
		
		}	
		
	}
	
	for(i=0; i<10; i++)
	{
		printf("%d ",sayilar[i]);
	}
}

int main()
{
	
	int dizi[10] = {23,12,34,554,3,2,15,34,21,78};
	int sayi; 
	int k,m,l,temp2;
	
	ekle(dizi,10);
	
	printf("eklemek istediginiz sayi: ");
	scanf("%d",&sayi);
	
	for(k=0; k<10; k++)
	{
		for(m=k+1; m<10; m++)
		{
			if(sayi>dizi[k] && sayi < dizi[m])
			{
				temp2 = dizi[k];
				dizi[k] = sayi;
				
			}
		}
	}
	
	for(l=0; l<10; l++)
	{
		printf("%d ",dizi[l]);
	}
	
	
	return 0;
}
