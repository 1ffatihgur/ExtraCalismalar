#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void enboy(int en,int boy)
{
	int i,j;
	int desen[en][boy];
	
	for(i=1; i<=en; i++)
	{
		for(j=1; j<=boy; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}



int main()
{
	
	int en,boy;
	
	printf("bir en degeri giriniz: ");
	scanf("%d",&en);
	
	printf("bir boy degeri giriniz: ");
	scanf("%d",&boy);
	
	enboy(en,boy);
	
	return 0;
}
