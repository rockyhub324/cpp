// Nama : Rocky Gunawan
// NIM : 825250080

#include <stdio.h>
#include <string>

int main(){ 
   int luas, biaya;
   float asuransi;
   char ladang [100];
   
   printf("Jenis Ladang : ");
   scanf("%s", &ladang);
   
   printf("Luas Tanah : ");
   scanf("%d", &luas);
   
   printf("Biaya yang harus dibayar : "); 
   scanf("%d", &biaya); 

   asuransi = 3.5/100 * luas * biaya;
   
   printf("\n");
   printf("----Jenis Ladang : %s----\n", ladang);
   printf("----Biaya Asuransi : %.2f----\n", asuransi);
   printf("----Terima Kasih----\n");

   return 0;
}