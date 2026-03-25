#include <stdio.h>

int main() {
    int baris = 5, spasi;
    int a = 1 , b = 10, c=20;
    for (int i = 0; i < baris; i++) {
        if(a <= 5){
            for(int j = 1; j<=5; j++){
            printf(" %d ",a);
            a++;
             }
         }
        else if(i == 1){
            for(int j = 1; j<=5; j++){
                printf("%d ",b);
                b--;
                if(b < 10)printf(" ");
             }
         }
        else if(i == 2){
             b = 11;
             for(int j = 1; j<=5; j++){ 
                printf("%d ",b);
                b++;
             }
         }
        else if(i == 3){
             for(int j = 1; j<=5; j++){ 
                printf("%d ",c);
                c--;
             }
         }
        printf("\n");
    }

    return 0;
}
