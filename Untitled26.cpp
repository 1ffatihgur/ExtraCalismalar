#include <stdio.h>
 
int main()
{
   int array[100], position, c, n, value;
   printf("Array'deki eleman sayisini girin\n");
   scanf("%d", &n);
 
   printf("%d adet eleman girin\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
 
   printf("Elemanýn eklenecegi konumu girin\n");
   scanf("%d", &position);
 
   printf("Eklenecek degeri girin\n");
   scanf("%d", &value);
 
   for (c = n - 1; c >= position - 1; c--)
      array[c+1] = array[c];
 
   array[position-1] = value;
 
   printf("Array'in son hali\n");
 
   for (c = 0; c <= n; c++)
      printf("%d\n", array[c]);
 
   return 0;
}


