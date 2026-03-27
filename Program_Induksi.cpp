#include <stdio.h>
#include <string.h>

int main(){
    int angka, hasil;
    char f[2];

    do{
        printf("Masukan bilangan bulat positif : ");
        scanf("%d",&angka);

        for(int i = 1; i < angka; i++)
        printf("%d + ", i);
        
        printf("%d = ",angka);
        hasil= angka*(angka+1)/2;
        printf("%d --> ",hasil);
        printf("%d*(%d)/2 = %d", angka,angka+1,hasil);

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