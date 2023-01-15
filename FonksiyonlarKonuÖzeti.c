#include<stdio.h>
#include<string.h>

int main()
{
	
	/*strcpy(parametre1,parametre2) fonksiyonu ILK PARAMETRE KISMI "NEREYE KOPYALAMAK ÝSTEDÝÐÝMÝZÝ" SORAR, IKINCI 
	PARAMETRE KISMI ÝSE NEREDEN KOPYALAMAK ÝSTEDÝÐÝMÝZÝ SORAR. IKIDEKÝ YAZIYI BÝR'E AKTARACAÐIZ!!!*/
	
	/*strlen(isim) FONKSÝYONU BÝR DÝZÝNÝN BOYUTUNU ÖLÇER. ORNEÐÝN: isim[]="Ali" DÝZÝSÝNÝN BOYUTU 3'TÜR.*/
	
	/*strcat(mesaj1,mesaj2) FONSÝYONU ÝLE MESAJ2'DEKÝ DEÐERÝ ALIP MESAJ1'E EKLEYEBÝLÝRÝSÝNÝZ.*/
	
	/*strrev(ad) FONKSÝYONU GÝRÝLEN KARAKTER DÝZÝSÝNÝ TERSETEN YAZDIRIR. */
	
	/*strlwr(karakter) FONKSÝYONU ÝLE GÝRÝLEN STRÝNGÝ TAMAMEN KÜÇÜK HARFLERE ÇEVÝRÝRÝZ. */
	
	/*strupr(karakter) FONKSÝYONU ÝLE GÝRÝLEN KARAKTER DÝZÝSÝNÝ TAMAMEN BÜYÜK HARFLERE ÇEVÝRÝR. */
	
	/*strcmp(string1,string2) FONKSÝYONUNUN 3 DURUMU VARDIR:
	1. HER ÝKÝ KARAKTER DÝZÝSÝ DE BÝRBÝRÝNE EÞÝT ÝSE strcmp(str1,str2)==0 OLARAK DÖNER.
	2. EÐER str1 ALFABETÝK OLARAK str2'DEN ÖNCE GELÝYORSA strcmp(str1,str2)<0 OLARAK DÖNER.
	3. EÐER str2 ALFABETÝK OLARAK str1'DEN ÖNCE GELÝYORSA strcmp(str1,str2)>0 OLARAK DÖNER.*/
	
	/* RANDOM DEÐER ATAMAK ÝÇÝN ÞU KODU YAZARIZ: 1+rand()%6 (1'DEN 6'YA KADAR RASTGELE SAYI ÜRETÝR.)
	.............................................8+rand()%100 (8'DEN 100'E KADAR RASTGELE SAYI ÜRETÝR.)
	KÜTÜPHANE OLARAK #include<stlib.h> KÜTÜPHANESÝNÝ EKLEMELÝYÝZ.
	EÐER HER DEFASINDA FARKLI BÝR RANDOM DEÐER ÝSTERSEK #include<time.h> KÜTÜPHANESÝNÝ EKLEYEREK ÞU KODU
	YAZMALIYIZ: srand(time(NULL)); YAZARSAK EÐER HER DEFASINDA FARKLI BÝR DEÐER DÖNECEKTÝR.
	*/
	
	
												 
	
	char isim[7][20] = {"Ali","Tugce","Melek","Volkan","Ahmet","Alp"}; 
	char gecici[20];
	
	int i,j,k;
	
	printf("ONCESI\n\n");
	for(i=0; i<=7; i++)
	{
		printf("%s\n",isim[i]);
	}
	
	
	for(i=0; i<=7; i++)
	{
		for(j=0; j<=6; j++)
		{
			if(strcmp(isim[j],isim[j+1])>0)
			{
				strcpy(gecici,isim[j]);
				strcpy(isim[j],isim[j+1]);
				strcpy(isim[j+1],gecici);
			}
		}
	}
	
	printf("\n\nSONRASI");
	
	for(i=0; i<=7; i++)
	{
		printf("%s\n",isim[i]);
	}
	
	
	
	
	
	
	
	
	
	/*char kullanici_adi[15] = "fatih563232";
	char sifre[15] = "Fatih2002.";
	char girilen_kullanici_adi[15];
	char girilen_sifre[15];
	
	printf("Kullanici adinizi giriniz: ");
	scanf("%s",girilen_kullanici_adi);	
	
	printf("Sifrenizi giriniz: ");
	scanf("%s",girilen_sifre);
	
	if(strcmp(kullanici_adi,girilen_kullanici_adi) == 0 && strcmp(sifre,girilen_sifre) == 0)
	{
		printf("Giris basarili!!");
	}
	else
	{
		printf("Kullanici adi veya sifre yanlis...");
	}
	*/
	
	
	
	
	
	
	
	
	
	
	/*char isim[10], isimkopya[10], mesaj[10]="Merhaba ";
	int uzunluk; 
	
	printf("isminizi giriniz: ");
	scanf("%s",isim);
	
	strcpy(isimkopya,isim);
	
	uzunluk = strlen(isim);
	
	printf("%s isminizin uzunlugu %d'dir.",strcat(mesaj,isimkopya),uzunluk)*/
	
	
	
	
	/*strcopy(parametre1,parametre2);
	
	char isim[10]="Ali";
	char isim2[10];
	
	
	printf("%s",strcpy(isim2,isim));
	
	
	char sehir[10];
	
	printf("%s",strcpy(sehir,"Ankara"));
	
	char isim[]="Melek", isimkopya[10];
	int i; 
	
	for(i=1; i<=strlen(isim); i++)
	{
		printf("Hosgeldin %s\n",strcpy(isimkopya,isim));
	}
	*/
	return 0;
}
