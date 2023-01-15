#include<stdio.h>

int main()
{
	
	int satir,sutun;
	int i,j;
	
	printf("satir giriniz: ");
	scanf("%d",&satir);
	
	printf("sutun giriniz: ");
	scanf("%d",&sutun);
	
	int dizi[satir][sutun];
	
	for(i=0; i<satir; i++)
	{
		for(j=0; j<sutun; j++)
		{
			printf("%d. satir ve %d. sutun sayisini giriniz: ",i+1,j+1);
			scanf("%d",&dizi[i][j]);
		}
	}
	
	for(i=0; i<satir; i++)
	{
		for(j=0; j<sutun; j++)
		{
			printf("%d ",dizi[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	return 0;
}
