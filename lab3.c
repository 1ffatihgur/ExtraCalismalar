#include<stdio.h>
#include<string.h>

int tekcift(sayi)
{
	if(sayi%2==0)
	{
		printf("sayi cifttir.");
	}
	else
	{
		printf("sayi tektir.");
	}
	
	return (tekcift);
}



int main()
{
	int sayi;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	tekcift(sayi);
	
	return 0;
}
