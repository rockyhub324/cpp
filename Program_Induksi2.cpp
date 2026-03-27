//Nama : Rocky Gunawan
//NIM : 825250080

#include <stdio.h>
#include <string.h>

int main(){
    int angka, hasil, num=1;
    char f[2];

    do{
        printf("Masukan jumlah bilangan ganjil : ");
        scanf("%d",&angka);

        for(int i = 1 ; i < angka ; i++){
        printf("%d + ", num);
        num+=2;}

        printf("%d = ",num);
        hasil= angka*angka;
        printf("%d --> (%d)*2 = %d", hasil,angka,hasil);
        
        printf("\nLanjutkan (Y/N) : ");
        scanf("%s",f);

        if(strcmp(f, "y") == 0){
            continue;
        }
        else{
            break;
        } 
    } while(true);

    return 0;
}