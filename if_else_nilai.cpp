// Nama : Rocky Gunawan
// NIM : 825250080

#include <stdio.h>
#include <string.h>

int main(){
    char nama[100]; 
    int nim;
    float Nilai_UTS, Nilai_praktik, Nilai_UAS, Nilai_akhir;
    char i[2];

    do{
    printf("Masukan Nama : ");
    scanf("%s", &nama);

    printf("Masukan NIM : ");
    scanf("%d", &nim);
    
    printf("Masukan Nilai UTS : ");
    scanf("%f", &Nilai_UTS);
    
    printf("Masukan Praktik : ");
    scanf("%f", &Nilai_praktik);
    
    printf("Masukan UAS : ");
    scanf("%f", &Nilai_UAS);
    
    if(Nilai_UTS <= 0 || Nilai_UTS >= 101 || Nilai_praktik <= 0|| Nilai_praktik >= 101|| Nilai_UAS <= 0|| Nilai_UAS >= 101){
        printf("Invalid\n");
        continue;
    }

    printf("\nNama : %s", nama);    
    printf("\nNIM : %.d", nim);    
    printf("\nNilai UTS : %.2f", Nilai_UTS);
    printf("\nNilai Praktik : %.2f", Nilai_praktik);
    printf("\nNilai UAS : %.2f", Nilai_UAS);

    Nilai_akhir = (Nilai_UTS*0.3)+(Nilai_praktik*0.2)+(Nilai_UAS*0.5);
    printf("\nNilai Akhir : %.1f", Nilai_akhir);

    if(Nilai_akhir>=60){
        printf("\nSelamat Anda Lulus");
    }
    else{
        for(int d = 0; d<5; d++){
           printf("\nSelamat Anda Tidak Lulus !!!");
        }
    }

    printf("\nLanjutkan ? (Y/N) : ");
    scanf("%s", i);

    if (strcmp (i,"y") == 0){
        continue;
    }
    else{
        break;
    }

    }while (true);

    return 0;
}