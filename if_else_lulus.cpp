// Nama : Rocky Gunawan
// NIM : 825250080

#include <stdio.h>
#include <string.h>

int main(){
    char nama[100]; 
    char skripsi[100], tulisan[100], sertifikat[100]  ; 
    int sks, studi, skpi;
    float ipk;
    char i[2];

    do{
    printf("Masukan jumlah SKS yang diambil : ");
    scanf("%d", &sks);
    if(sks < 144){
        printf("Mohon maaf jumlah sks yang anda ambil tidak memenuhi.");
        printf("\nAnda !!! TIDAK LULUS !!!");
        break;
    }

    printf("\nMasukan IPK : ");
    scanf("%f", &ipk);
    if(ipk < 2.4){
        printf("Mohon maaf IPK anda tidak memenuhi.");
        printf("\nAnda !!! TIDAK LULUS !!!");
        break;
    }
    
    printf("\nMasukan lama masa studi : ");
    scanf("%d", &studi);
      if(studi > 16){
        printf("Mohon maaf lama masa studi anda telah melewati batas.");
        printf("\nAnda !!! TIDAK LULUS !!!");
        break;
    }

    printf("\nApakah kamu lulus skripsi ? (Ya/Tidak): ");
    scanf("%s", &skripsi);
      if(strcmp (skripsi,"tidak") == 0|| strcmp (skripsi,"Tidak") == 0){
        printf("Mohon maaf anda tidak lulus skripsi.");
        printf("\nAnda !!! TIDAK LULUS !!!");
        break;
    }
    
    printf("\nApakah kamu membuat tulisan ilmiah ? (Ya/Tidak) : ");
    scanf("%s", &tulisan);
      if(strcmp (tulisan,"tidak") == 0 || strcmp (tulisan,"Tidak") == 0){
        printf("Mohon maaf anda tidak memiliki tulisan ilmiah.");
        printf("\nAnda !!! TIDAK LULUS !!!");
        break;
    }

    printf("\nMasukan jumlah poin SKPI : ");
    scanf("%d", &skpi);
      if(skpi < 150){
        printf("Mohon maaf poin SKPI anda tidak memenuhi.");
        printf("\nAnda !!! TIDAK LULUS !!!");
        break;
    }

    printf("\nApakah kamu memiliki sertifikasi : ");
    scanf("%d", &sertifikat);
      if(strcmp (sertifikat,"tidak") == 0 || strcmp (sertifikat,"Tidak") == 0){
        printf("Mohon maaf sks anda tidak memiliki sertifikat.");
        printf("\nAnda !!! TIDAK LULUS !!!");
        break;
    }
    printf("\nAnda telah memenuhi seluruh persyaratan.\n");
    printf("!!! Selamat Anda LULUS !!!\n");

    printf("Lanjutkan ? (Y/N) : ");
    scanf("%s", i);

    if (strcmp (i,"y") == 0){
        continue;
    }
    else{
        printf("\nTerima Kasih");
        break;
    }

    }while (true);

    return 0;
}