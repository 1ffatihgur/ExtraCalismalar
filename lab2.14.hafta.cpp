#include<stdio.h>
#include<string.h>



int main()
{
	
	char str[30] = "ahmet merhaba";
	char gecici[30];
	int i; 
	
	for(i=0; i<30; i++)
	{
		if(strcmp(str[i],str[i+1]) > 0))
		{
			strcpy(gecici,str[i]);
			strcpy(str[i],str[i+1]);
			strcpy(str[i+1],gecici);
		}
	}
	
	for(i=0; i<30; i++)
	{
		printf("%c",str[i]);
	}
	
	
	return 0;
}
