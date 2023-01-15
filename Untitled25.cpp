#include<stdio.h>


int main()
{
    int i, j, x;
    
    int a[8] = { 5,8,10,3,8,5,10,3 };
    
    printf("dizi = ");
    
    for (i = 0; i <= 7; i++)
        {
            printf("%d  ", a[i]);
        }
    int h = 0; //Hafýza deðiþkeni ata.
    for (i = 0; i <= 7; i++) { //Adet kontrol döngüsü
        for (j = 0; j <= 7; j++) {
                if (a[i] == a[j]) //Ýki dizi elemaný eþit mi?
                {
                    h++; //Eþitse hafýzayý 1 arttýr.
                    
                        if ( h > 1 ) a[j]=-1;
                }
                if (j == 7) { //Dizi kontorlü tamamlandý mý?                
                    if ( a[i]!=-1) {
                    
                    printf("\n%d 'den %d tane var.", a[i], h); //Tamamlanmýþsa adeti yazdýr ve hafýzayý sýfýrlama.
                
                    }
                    
                    h = 0;
                    
                }
                
        }
    }

}
