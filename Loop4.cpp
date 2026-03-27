#include <stdio.h>

int main(){
    
    int tunggu = 3;
    printf("No 4\n");
    for(int i=1; i <= tunggu; i++){
        for(int j = 1; j <= tunggu - i; j++){
             printf(" ");
        }
        for(int l = 1; l <= (2*i-1); l++){
            printf("*");
        }
        printf("\n");
    }
    for (int i=tunggu - 1; i>=1; i--){
        for(int j=1; j<= tunggu-i; j++){
             printf(" ");
        }
        for(int l = 1; l <= (2*i-1); l++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}