#include<stdio.h>

void sonuc(vize,final)
{
	int ort;
	
	ort = (vize + final) / 2;
	
	if(ort>90)
	{
		printf("Notunuz: %d AA",ort);
	}
	
	else if(ort>70)
	{
		printf("Notunuz: %d BB",ort);
	}
	
	else if(ort>50)
	{
		printf("Notunuz: %d CC",ort);
	}
	
	else if(ort<40)
	{
		printf("Notunuz: %d DD ve kaldiniz!!",ort);
	}

}





int main()
{
	
	int vize,final;
	
	printf("vize notunuz: ");
	scanf("%d",&vize);
	
	printf("final notunuz: ");
	scanf("%d",&final);
	
	sonuc(vize,final);
	
	return 0;
}
