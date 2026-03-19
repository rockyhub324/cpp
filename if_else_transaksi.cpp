// Nama : Rocky Gunawan
// NIM : 825250080

#include <stdio.h>
#include <string.h>

int main(){
    float transaksi, Nilai_transaksi;
    char i[2];

    do{
        printf("Masukan besarnya transaksi :");
        scanf("%f", &transaksi);

        if (transaksi <= 0){
            printf("Invalid");
        }
        
        else if(transaksi > 5000000){
            Nilai_transaksi= transaksi + 10000;
            printf("Nilai Transaksi + Bea Materai adalah : %.2f", Nilai_transaksi);
        }
        else{
            printf("Nilai Transaksi adalah : %.2f", transaksi);
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