#include<stdio.h>
#include<string.h>

int main()
{
	
	char words[11][20]={"C","C++","Java","PHP","Python","Perl","Ruby","R","JavaScript","PHP"};
	char gecicibellek[20];
	int i,j;
	
	for(i=0; i<=10; i++)
	{
		for(j=0; j<=10; j++)
		{
			if(strcmp(words[j],words[j+1]) > 0)
			{
				strcpy(gecicibellek,words[j]);
				strcpy(words[j],words[j+1]);
				strcpy(words[j+1],gecicibellek);
			}
		}
	}
	
	for(i=0; i<=11; i++)
	{
		printf("%s\n",words[i]);
	}
	
	
	
	
	
	
	
	return 0;
}
