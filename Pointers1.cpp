//Nama : Rocky Gunawan
//Kelas : SI-B
//NIM : 825250080

#include <stdio.h>

void bagiArray(int a[], int b[], int c[], int bagi){//membagi nilai array A menjadi 2
    for(int i = 0; i < bagi; i++){//memasukan nilai ke array B
        b[i] = a[i];
    }
    for(int i = 0; i < bagi; i++){//memasukan nilai ke array C
        c[i] = a[i + bagi];
    }
}

int main (){
    int jumlah;
    printf("Jumlah array A: ");//input jumlah nilai array A
    scanf("%d",&jumlah);
    int a[jumlah];
    
    for(int i = 0; i < jumlah; i++){//input nilai kedalam array A
        printf("Array %d: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Array A : \n");
    for(int i = 0; i < jumlah; i++){//output array A
        printf("%d, ", a[i]);
    }
    int bagi = jumlah/2;
    int b[bagi];
    int c[bagi];

    bagiArray(a, b, c, bagi);//memanggil fungsi

    printf("\nArray B : ");
    for(int i = 0; i < bagi; i++){//output array B
        printf("%d ", b[i]);
    }
    printf("\nArray C: ");
    for(int i = 0; i < bagi; i++){//output array C
        printf("%d ", c[i]);
    }
}




