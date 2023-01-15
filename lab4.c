#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int asal_mi(int sayi)
{
	int i;
		
	for(i=3; i<sayi; i++)
	{
		if(sayi % i == 0)
		{
			return 0;
		}
		
		return 1;
		
	}
}

int armstrong(int sayi)
{
	int a,b,temp,toplam;
	temp = sayi;
	
	while(sayi>9)
	{
		sayi = sayi / 10;
		a++;
	}
	
	while(temp>0)
	{
		b = temp%10;
		toplam = toplam + pow(b,a);
		temp = temp / 10;
	}
	
	if (toplam == temp)
	{
		return 1;
	}
	
	return 0;
}


int main()
{
	int x;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&x);
	
	if(asal_mi(x) == 1)
	{
		printf("asal .");
		
	}
	
	else if (asal_mi(x)==1 && armstrong(x)==1)
	{
		printf("sayi hem ASAL hem ARMSTRONG");
	}

	else if(armstrong(x)==1)
	{
		printf("\narmstrong degl");
	}
	
	
	
	return 0;
	
}
