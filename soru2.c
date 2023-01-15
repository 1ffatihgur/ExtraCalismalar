#include<stdio.h>

int main()
{
	
	int notlar[4][4] = {{67,76,55,0},{34,79,76,0},{56,68,57,0},{66,89,65,0}};
	int i,j;
	int toplam,ort,maks;


	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%d ",notlar[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			toplam = toplam + notlar[i][j];
		}
		ort = toplam / 3;
		notlar[i][3] = ort;
		printf("%d ",notlar[i][3]);
		toplam = 0;
	}
	
	for(i=0; i<4; i++)
	{
		for(j=3; j<4; j++)
		{
			if(notlar[i][j] > maks)
			{
				maks = notlar[i][j];
			}
		}
	}
	
	printf("\nen buyuk ortalama: %d",maks);
	
	
	
	
	
	return 0;
	
}
