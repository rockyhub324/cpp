//Nama : Rocky Gunawan
//Kelas : SI-B
//NIM : 825250080

#include <stdio.h>

typedef struct{
    char nama[20];
    int jumlah;

}list;

int main(){
    list barang[20];
    int c = 0, lanjut;
    printf("Program Untuk Membuat Shopping List\n");
    do{
    printf("Nama Barang : ");
    scanf("%s",&barang[c].nama);
    printf("Jumlah Barang : ");
    scanf("%d",&barang[c].jumlah);
    if(barang[c].jumlah < 1){
        printf("Tidak Bisa\n");
        continue;
    }
    c++;
    printf("Lanjut (1) : ");
    scanf("%d",&lanjut);
    if(lanjut!=1)break;
    
}while(true);

    FILE *f = fopen("List.txt","r+");
    if (f!=NULL){
        fprintf(f,"------Shopping List------\n");
        fprintf(f,"NAMA %20s\n","JUMLAH");
        for(int i =0; i<c; i++)fprintf(f,"%-21s %d",barang[i].nama,barang[i].jumlah);
    }
    else printf("Gagal");
    fclose(f);

    printf("\n------Shopping List------\n");
    printf("NAMA %20s\n","JUMLAH");
    for(int i = 0; i<c; i++){
        printf("%-21s %d\n",barang[i].nama,barang[i].jumlah);
    }
    return 0;
}