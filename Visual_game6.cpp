#include<stdio.h>

int main (){
    int n;
    char c1,c2,c3;

    printf("Masukan angka : ");
    scanf("%d", &n);
    printf("Masukan simbol 1 : ");
    scanf(" %c", &c1);
    printf("Masukan simbol 2 : ");
    scanf(" %c", &c2);
    printf("Masukan simbol 3 : ");
    scanf(" %c", &c3);

    for(int i = 1; i <= 2; i++){
        for(int l = 1; l <= n; l++){
            printf("%c ", c1);
        }
        if(i==2)break;
        for(int m = 1; m <= n-2; m++){
            printf("\n");
            for(int z = 1; z <= n; z++){
                if(z==1||z==n)printf("%c ", c2);
                else printf("%c ", c3);
            }
    }  
    printf("\n");
    }

    return 0;
}
