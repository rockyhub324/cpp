//Nama : Rocky Gunawan
//NIM : 825250080

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    int a, b, jawaban, skor = 0 ,salah = 0;
    char op;
    int hasil1;
    int batas1= 10, batas2 = 30, batas3 = 60;
    int type1 = 0;
    char f[2];
    
    srand(time(NULL));
    do{
        printf("---Permainan Perhitungan Aritmatika Simpel---\n");
        printf("Anda hanya memiliki tiga kesempatann\n");
        printf("Selamat Mengerjakan\n");
        printf("\nSesi 1 : ");
        do{
            a = (rand() % batas1) + 1;
            b =  (rand() % batas1) + 1;
            
            int pilih = rand() % 4;
            if(pilih == 0){
                op = '+'; jawaban = a+b;}
            else if(pilih == 1){
                op = '-'; jawaban = a-b;}
            else if(pilih == 2){
                op = '*'; jawaban = a*b;}
            else if(pilih == 3){
                op = '/'; jawaban = a/b;}

            printf("\n%d %c %d",a,op,b);

            printf("\nJawaban = ");
            scanf("%d",&hasil1);
            if(jawaban == hasil1){
                skor += 5;
                printf("Kamu benar\n");
                printf("Skor + 5\n");
            }
            else{
                printf("Kamu salah, jawaban yang benar adalah = %d\n", jawaban);
                salah++;

            if(salah == 3){
                printf("\n----Kamu KALAH----");
                break;
            }
            }
            type1++;
        } while(type1 != 3);

            if(salah < 3){
                printf("\nSesi 2 : ");
                do{
                a = (rand() % batas2) + 1;
                b =  (rand() % batas2) + 1;
                
                int pilih = rand() % 4;
                if(pilih == 0){
                    op = '+'; jawaban = a+b;}
                else if(pilih == 1){
                    op = '-'; jawaban = a-b;}
                else if(pilih == 2){
                    op = '*'; jawaban = a*b;}
                else if(pilih == 3){
                    op = '/'; jawaban = a/b;}
        
                printf("\n%d %c %d",a,op,b);
        
                printf("\nJawaban = ");
                scanf("%d",&hasil1);
                if(jawaban == hasil1){
                    skor += 10;
                    printf("Kamu benar\n");
                    printf("Skor + 10\n");
                }
                else{
                    printf("Kamu salah, jawaban yang benar adalah %d\n", jawaban);
                    salah++;
                }
                if(salah == 3){
                    printf("----Kamu KALAH----");
                    break;
                }
                type1++;
                }while(type1 != 6);
            }
                if(salah < 3){
                    printf("\nSesi 3 : ");
                    do{
                    a = (rand() % batas3) + 1;
                    b =  (rand() % batas3) + 1;
                    
                    int pilih = rand() % 4;
                    if(pilih == 0){
                        op = '+'; jawaban = a+b;}
                    else if(pilih == 1){
                        op = '-'; jawaban = a-b;}
                    else if(pilih == 2){
                        op = '*'; jawaban = a*b;}
                    else if(pilih == 3){
                        op = '/'; jawaban = a/b;}

                    printf("\n%d %c %d",a,op,b);

                    printf("\nJawaban = ");
                    scanf("%d",&hasil1);
                    if(jawaban == hasil1){
                        skor += 15;
                        printf("Kamu benar\n");
                        printf("Skor + 10\n");
                    }
                    else{
                        printf("Kamu salah, jawaban yang benar adalah %d\n", jawaban);
                        salah++;
                        if(salah == 3){
                            printf("----Kamu KALAH----");
                            break;
                        }
                    }
                    type1++;
                    }while(type1 != 9);
                    }

      int skor_akhir = skor * 100 / 90;
      if(salah != 3){printf("\n---Selamat Anda berhasil sampai akhir---");}
      printf("\nSkor akhir anda adalah : %d/90 atau %d/100", skor, skor_akhir);
      printf("\nDari skor yang didapat, kami menyatakan anda ");

      if(skor_akhir > 95){printf("PINTAR\n");}
      else if(skor_akhir > 85){printf("LUMAYAN PINTAR\n");}
      else if(skor_akhir > 75){printf("BIASA SAJA\n");}
         else{printf("PERLU MENGULANG SEKOLAH DASAR\n");}

      printf("\nLanjutkan ? (Y/N) : \n");
      scanf("%s", f);

      if (strcmp(f, "y") == 0) {
      continue;
      } 
      else {
      printf("Terima Kasih");
      break;
      }

    }while(true);

    return 0;
}