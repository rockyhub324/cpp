// Nama : Rocky Gunawan
// NIM : 825250080

#include <stdio.h>
#include <string>

int main(){ 
   int orang, p1, p2, persen_orang,persen_lemon, persen_jeruk;

   printf("Jumlah Orang : ");
   scanf("%d", &orang);
   
   printf("Persenan orang yang membeli minuman : ");
   scanf("%d", &p1);

   printf("Persenan orang yang menyukai rasa lemon : ");
   scanf("%d", &p2);

   persen_orang = orang * p1 /100;
   persen_lemon = persen_orang * p2 /100;
   persen_jeruk = persen_orang-persen_lemon;

   printf("Jumlah orang yang membeli minuman energi %d \n", persen_orang);
   printf("Jumlah orang yang menyukai rasa lemon %d \n", persen_lemon);
   printf("Jumlah orang yang menyukai rasa jeruk %d \n", persen_jeruk);

   printf("----Terima Kasih----\n");

   return 0;
}