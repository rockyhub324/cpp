#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(){
    int secret, angka, jumlah=0;
    char f[2];
    
    do{
        srand(time(0));
        secret= (rand() % 10) + 1;
        printf("%d", secret);
        do{
            printf("\nMasukan angka di antara 1-10 : ");
            scanf("%d",&angka);

            if(secret > angka){
                printf("Angka terlalu kecil!");
                jumlah++;
                continue;
            }
            
            else if(secret < angka){
                printf("Angka terlalu besar!");
                jumlah++;
                continue;
            }
            else if(secret==angka){
                printf("!!! Tebakan anda benar !!!\n");
                printf("Jumlah percobaan anda adalah %d kali\n", jumlah + 1);
                if(jumlah <= 1){
                    printf("WOW");
                }
                else if(jumlah <= 3){
                    printf("Hebat!!");
                }
                else if(jumlah <= 5){
                    printf("Lumayan");
                }
                else if(jumlah <= 8){
                    printf("Agak mengecewakan");
                }
                else{
                    printf("PAYAH");
                }
                break;
            }

        } while (true);
        
      printf("\nLanjutkan ? (Y/N) : ");
      scanf("%s", f);

      if (strcmp(f, "y") == 0) {
      continue;
      } 
      else {
      printf("Terima Kasih");
      break;
      }

    }while (true);

    return 0;
}