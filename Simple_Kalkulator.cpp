#include<stdio.h>

int tambah(float num1, float num2){
    int sum = num1+num2;
    return sum;
}

int kurang(float num1, float num2){
    int sum = num1-num2;
    return sum;
}

int kali(float num1, float num2){
    int sum = num1*num2;
    return sum;
}

float bagi(float num1, float num2){
    float sum_bagi = num1/num2;
    return sum_bagi;
}

int main (){
    printf("----Kalkulator Sederhana----\n");
    float x, y;
    int sum;
    float sum_bagi;
    char pil;
    do{
        printf("Masukan angka pertama : ");
        scanf("%f", &x);
        printf("Masukan angka kedua : ");
        scanf("%f", &y);
        printf("Masukan pilihan (+ - *  /) : ");
        scanf(" %c", &pil);

    switch (pil){
        case '+':
       sum = tambah(x, y);
        break;
        case '-':
       sum = kurang(x, y);
        break;
        case '*':
       sum = kali(x, y);
        break;
        case '/':
       sum_bagi = bagi(x, y);
        break;
        default:
        printf("Bukan merupakan pilihan\n");
        break;
    }

    if(pil !='/')printf("%d\n", sum);
    else printf("%.2f\n", sum_bagi);
    int stop;
    printf("Lanjut ga ? (1 untuk lanjut) : ");
    scanf("%d", &stop);
    if(stop==1)continue;
    else {
        printf("Terima Kasih");
        break;
    }

    }while(true);

    return 0;
}