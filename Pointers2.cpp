//Nama : Rocky Gunawan
//Kelas : SI-B
//NIM : 825250080

#include <stdio.h>

void isiArray(int a[], int b[], int jumlah, int jumlah2){
    for(int i = 0; i < jumlah2; i++){//memasukan nilai array A ke array B
        if(i < jumlah){
            b[i] = a[i];
        }
        else{
            b[i] = 0;//mengganti nilai yang kosong menjadi 0
        }
    }
}

int main (){
    int jumlah;
    printf("Jumlah array : ");//input jumlah nilai array A
    scanf("%d",&jumlah);
    int a[jumlah];

    printf("Masukan\n");
    for(int i = 0; i < jumlah; i++){//input nilai array A
        printf("Angka ke-%d: ", i+1);
        scanf("%d",&a[i]);
    }
    printf("\nArray A :\n");
    for(int i = 0; i < jumlah; i++){//output array A
        printf("%d, ", a[i]);
    }
    int jumlah2 = jumlah * 2;
    int b[jumlah2];
    isiArray(a, b, jumlah, jumlah2);//pemanggilan fungsi
    printf("\nArray B : \n");
    for(int i = 0; i < jumlah2; i++){//output array B
        printf("%d, ", b[i]);
    }
}




