#include<stdio.h>
#include<string.h>

int main()
{
	
	/*strcpy(parametre1,parametre2) fonksiyonu ILK PARAMETRE KISMI "NEREYE KOPYALAMAK �STED���M�Z�" SORAR, IKINCI 
	PARAMETRE KISMI �SE NEREDEN KOPYALAMAK �STED���M�Z� SORAR. IKIDEK� YAZIYI B�R'E AKTARACA�IZ!!!*/
	
	/*strlen(isim) FONKS�YONU B�R D�Z�N�N BOYUTUNU �L�ER. ORNE��N: isim[]="Ali" D�Z�S�N�N BOYUTU 3'T�R.*/
	
	/*strcat(mesaj1,mesaj2) FONS�YONU �LE MESAJ2'DEK� DE�ER� ALIP MESAJ1'E EKLEYEB�L�R�S�N�Z.*/
	
	/*strrev(ad) FONKS�YONU G�R�LEN KARAKTER D�Z�S�N� TERSETEN YAZDIRIR. */
	
	/*strlwr(karakter) FONKS�YONU �LE G�R�LEN STR�NG� TAMAMEN K���K HARFLERE �EV�R�R�Z. */
	
	/*strupr(karakter) FONKS�YONU �LE G�R�LEN KARAKTER D�Z�S�N� TAMAMEN B�Y�K HARFLERE �EV�R�R. */
	
	/*strcmp(string1,string2) FONKS�YONUNUN 3 DURUMU VARDIR:
	1. HER �K� KARAKTER D�Z�S� DE B�RB�R�NE E��T �SE strcmp(str1,str2)==0 OLARAK D�NER.
	2. E�ER str1 ALFABET�K OLARAK str2'DEN �NCE GEL�YORSA strcmp(str1,str2)<0 OLARAK D�NER.
	3. E�ER str2 ALFABET�K OLARAK str1'DEN �NCE GEL�YORSA strcmp(str1,str2)>0 OLARAK D�NER.*/
	
	/* RANDOM DE�ER ATAMAK ���N �U KODU YAZARIZ: 1+rand()%6 (1'DEN 6'YA KADAR RASTGELE SAYI �RET�R.)
	.............................................8+rand()%100 (8'DEN 100'E KADAR RASTGELE SAYI �RET�R.)
	K�T�PHANE OLARAK #include<stlib.h> K�T�PHANES�N� EKLEMEL�Y�Z.
	E�ER HER DEFASINDA FARKLI B�R RANDOM DE�ER �STERSEK #include<time.h> K�T�PHANES�N� EKLEYEREK �U KODU
	YAZMALIYIZ: srand(time(NULL)); YAZARSAK E�ER HER DEFASINDA FARKLI B�R DE�ER D�NECEKT�R.
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
