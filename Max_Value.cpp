//Nama : Rocky Gunawan
//Kelas : SI-B
//NIM : 825250080

#include <stdio.h>

int main(){
    int num[10]={};
    int angka , lanjut;
    int jum = 0, c=0;
    int x=num[1];
    printf("Program Untuk Mencari Angka Terbesar\n");
    do{
    printf("Masukan angka : ");
    scanf("%d",&num[c]);
    jum++;
    c++;
    }while(c < 5);

    do{
    FILE *f = fopen("MaxValue.txt","w");
    if (f!=NULL){
        for(int i =0; i<jum; i++)fprintf(f,"%d",num[i]);
    }
    else printf("Gagal");
    fclose(f);

    for(int i = 0;i<jum; i++){ 
        printf("%d ",num[i]);
        if(num[i+1]>num[i]) x=num[i+1];
        else continue;
    }
    printf("\nAngka terbesar : %d\n",x);

    
    printf("Lanjut (1) : ");
    scanf("%d",&lanjut);
    if(lanjut!=1) {
        printf("Terimakasih");
        break;
    }
    printf("Masukan angka tambahan : ");
    scanf("%d",&num[c]);
    c++;
    jum++;
    FILE *p = fopen("MaxValue.txt","a");
    if (p!=NULL){
        fprintf(p,"%d",num[c]);
    }
    else printf("Gagal");
    fclose(p);

    }while(true);

    return 0;
}