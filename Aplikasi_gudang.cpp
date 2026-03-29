//Nama : Rocky Gunawan
//Kelas : SI-B
//NIM : 825250080

#include <stdio.h>

int tambah(int pilihan, char x, int jumlah[20],int jum){
    switch(pilihan){
        case 0: 
        jumlah[pilihan] += jum;
        break;
        case 1: 
        jumlah[pilihan] += jum;
        break;
        case 2: 
        jumlah[pilihan] += jum;
        break;
        case 3: 
        jumlah[pilihan] += jum;
        break;
        case 4: 
        jumlah[pilihan] += jum;
        break;
    }
    return jum;
}

int kurang(int pilihan, char x, int jumlah[20],int jum){
    switch(pilihan){
        case 0: 
        jumlah[pilihan] -= jum;
        break;
        case 1: 
        jumlah[pilihan] -= jum;
        break;
        case 2: 
        jumlah[pilihan] -= jum;
        break;
        case 3: 
        jumlah[pilihan] -= jum;
        break;
        case 4: 
        jumlah[pilihan] -= jum;
        break;
    }
    return jum;
}


void rak(int jumlah[20],char produk[50][50]){
        for(int n=0; n<5; n++){
        printf("%s",produk[n]);
        printf("%2s","  ");
        for(int l=0; l<jumlah[n]; l++) printf("%d ",n);
        if(jumlah[n]<0)printf("Produk Habis");
        printf("\n");
        printf("--------------------------------\n");
    }
}
int main(){
    char produk[50][50]={};
    int jumlah[20]={};
    int pilihan;
    char x;
    int jum;
    int total;

    printf("Aplikasi Gudang\n");
    for(int i=0; i<5;i++){
        printf("Masukan Nama Produk : ");
        scanf("%s", &produk[i]);
    }
    printf("\n");
    for(int l=0; l<5;l++){
        printf("Masukan Jumlah %s : ",produk[l]);
        scanf("%d", &jumlah[l]);
    }
    
    do{
    printf("\n");
        
    rak(jumlah,produk);

    printf("Pilih barang apa yang ingin dimanipulasi (0-4) : ");
    scanf("%d", &pilihan);
    
    printf("Pilih (+/-) : ");
    scanf(" %c", &x);

    printf("Jumlah : ");
    scanf("%d",&jum);
    if(jum>jumlah[pilihan]){
        printf("Tidak bisa\n");
        continue;
    }

    if(x =='+')total = tambah(pilihan,  x, jumlah, jum);
    else if(x =='-')total = kurang(pilihan,  x, jumlah, jum); 

    }while (true);

    return 0;
}