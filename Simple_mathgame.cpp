#include<stdio.h>

int main (){
    int x, y;
    printf("Masukan angka pertama : ");
    scanf("%d", &y);
    printf("Masukan angka penambah : ");
    scanf("%d", &x);

    for(int i = 1; i <=x+1; i++){
        printf("%d ",y);
        y= y+x;
    }

    return 0;
}