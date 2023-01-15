#include<stdio.h>
#include<stdlib.h> //rastgele deger atamak için
#include<math.h> // matematik fonsksiyonlarý için
#include<time.h> // srand(time(NULL)) olayýný kullanmak için

void deger_al(int matris[][5], int size)
{
	
	int i,j;
	
	for(i=0; i<size; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%d. satir %d. sutun degerini giriniz: ",i+1,j+1);
			scanf("%d",&matris[i][j]);
		}
	}
	
	
}

void bastir(int matris[][5], int size)
{
	
	int c,b;
	
	for(c=0; c<size; c++)
	{
		for(b=0; b<5; b++)
		{
			printf("%d ",matris[c][b]);
		}
		printf("\n");
	}
	
}


int main()
{
	
	int a;
	
	printf("satir sayisi giriniz: ");
	scanf("%d",&a);
	
	int dizimiz[a][5];
	

	
	deger_al(dizimiz,a);
	
	bastir(dizimiz,a);
	
}


