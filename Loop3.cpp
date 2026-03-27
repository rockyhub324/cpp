//Nama : Rocky Gunawan
//NIM : 825250080

#include <stdio.h>

int main(){
    
    printf("----Latihan Soal For Loop----\n");
   
    int y = 1, x = 2;
    int tinggi = 4;
    printf("No 3\n");
    for(int i = 0; i <  5; i++){
        
        for(int j = 0; j <= tinggi - i; j++){
            printf("*");
        }
        printf("%d\n",x);
        y = y + 2;
        x = x + y;
    }

    return 0;
}