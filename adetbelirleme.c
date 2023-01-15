#include<stdio.h>

int main(){
	char str[20];
	int x=0;
	int i=48;
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,j=0,l=0;
	printf("lutfen okul numaranizi giriniz: ");
	scanf("%s",str);
	while(i>=48&&i<=57){
			if(str[x]==48){
			a++;
		}
		   else	if(str[x]==49){
			b++;
		}
		  else if(str[x]==50){
			c++;
		}	
		   else if(str[x]==51){
			d++;
		}
			else if(str[x]==52){
			e++;
		}	
			else if(str[x]==53){
			f++;
		}
			else if(str[x]==54){
			g++;
		}
			else if(str[x]==55){
			h++;
		}	
			else if(str[x]==56){
			j++;
		}
		else {
			l++;
	}
	x++;
	i++;
}
printf("numaradaki 0 sayisi %d adettir: \n",a);
printf("numaradaki 1 sayisi %d adettir: \n",b);
printf("numaradaki 2 sayisi %d adettir: \n",c);
printf("numaradaki 3 sayisi %d adettir: \n",d);
printf("numaradaki 4 sayisi %d adettir: \n",e);
printf("numaradaki 5 sayisi %d adettir: \n",f);
printf("numaradaki 6 sayisi %d adettir: \n",g);
printf("numaradaki 7 sayisi %d adettir: \n",h);
printf("numaradaki 8 sayisi %d adettir: \n",j);
printf("numaradaki 9 sayisi %d adettir: \n",l);
}
