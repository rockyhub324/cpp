//Nama : Rocky Gunawan
//NIM : 825250080
//Kelas : SI-B

#include <stdio.h>

void struk(int jenis[3], int tarif[3], int jam[3], int kendaraan[3], int jum_kendaraan,char nama[10]){
    int total= 0;
    printf("\n----------Tiket Parkir----------");
    printf("\nNama : %s\n", nama);
    for(int i = 0; i<jum_kendaraan; i++){
        if(jenis[i]==1)printf("Jenis kendaraan : Motor\n");
        else if (jenis[i]==2)printf("Jenis kendaraan : Mobil\n");
        else if (jenis[i]==3)printf("Jenis kendaraan : Truk\n");
        printf("Lama Parkir : %d\n", jam[i]);
        printf("Harga : %d\n", kendaraan[i]);
        printf("\n");
    }

}
void tot(int kendaraan[3],int jum_kendaraan){
    int total= 0;
    for(int i = 0; i<jum_kendaraan; i++){
        total += kendaraan[i];
    }
    printf("Total Biaya Parkir = %d", total);
    printf("\n----------Terima Kasih----------");
}

double harga (int jam[3], int tarif[3], int f){
 if(jam[f] > 5){
            int diskon =tarif[f] * jam[f] * 0.1;
        return tarif[f] * jam[f] - diskon;
        }
        else {
        return tarif[f] * jam[f]; }
    }

void printstruk(int jenis[3], int tarif[3], int jam[3], int kendaraan[3], int jum_kendaraan,char nama[10]){
int total= 0;
int total1= 0;
    FILE *f = fopen("struk.txt", "w");
    if(f==NULL){
        printf("Gagal");
        return;
    }

    fprintf(f,"\n----------Tiket Parkir----------");
    fprintf(f,"\nNama : %s\n", nama);
    for(int i = 0; i<jum_kendaraan; i++){
        if(jenis[i]==1)fprintf(f,"Jenis kendaraan : Motor\n");
        else if (jenis[i]==2)fprintf(f,"Jenis kendaraan : Mobil\n");
        else if (jenis[i]==3)fprintf(f,"Jenis kendaraan : Truk\n");
        fprintf(f,"Lama Parkir : %d\n", jam[i]);
        fprintf(f,"Harga : %d\n", kendaraan[i]);
        fprintf(f,"\n");
    }

    for(int i = 0; i<jum_kendaraan; i++){
        total1 += kendaraan[i];
    }
    fprintf(f,"Total Biaya Parkir = %d", total1);
    fprintf(f,"\n----------Terima Kasih----------");
    fclose(f);
}

int main(){
    int tarif[3];
    int jum_kendaraan; 
    int jenis[3], jam[3];
    int kendaraan[3];
    int total=0;
    char nama[10];
    int f = 0;

    printf("Nama : ");
    scanf("%s", &nama);

    do{
    printf("Berapa Jumlah Kendaraan : ");
    scanf("%d", &jum_kendaraan);
    }while(jum_kendaraan > 3 || jum_kendaraan <= 0);

    for(int i = 0; i<jum_kendaraan; i++){
        printf("\nTipe kendaraan\n 1. Motor\n 2. Mobil \n 3. Truk\nPilih tipe kendaraan: ");
        scanf("%d", &jenis[i]);
        if(jenis[i] == 1){
            tarif[i] = 2500;
        }
        else if(jenis[i] == 2){
            tarif[i] = 5000;
        }  
        else if(jenis[i] == 3){
             tarif[i] = 10000;
        }
        printf("Berapa Jam : ");
        scanf("%d", &jam[i]);
        kendaraan[i]= harga(jam, tarif, f);
        f++;
    }
    struk(jenis, tarif,jam, kendaraan, jum_kendaraan,nama);
    tot(kendaraan, jum_kendaraan);
    printstruk(jenis, tarif,jam, kendaraan, jum_kendaraan,nama);
    
}