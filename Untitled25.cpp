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
    int h = 0; //Haf�za de�i�keni ata.
    for (i = 0; i <= 7; i++) { //Adet kontrol d�ng�s�
        for (j = 0; j <= 7; j++) {
                if (a[i] == a[j]) //�ki dizi eleman� e�it mi?
                {
                    h++; //E�itse haf�zay� 1 artt�r.
                    
                        if ( h > 1 ) a[j]=-1;
                }
                if (j == 7) { //Dizi kontorl� tamamland� m�?                
                    if ( a[i]!=-1) {
                    
                    printf("\n%d 'den %d tane var.", a[i], h); //Tamamlanm��sa adeti yazd�r ve haf�zay� s�f�rlama.
                
                    }
                    
                    h = 0;
                    
                }
                
        }
    }

}
