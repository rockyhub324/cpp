#include<stdio.h>

int main (){
    int x, y;
    int pilihan;
    int a[50]={}, b[50]={};
    int c[50]={};
    int A[10][10], B[10][10];

    printf("Program Matrix Penjumlahan\n");   
    printf("Penjumlahan Atau Pengurangan (1 = +/2 = -): ");
    scanf("%d", &pilihan);

    printf("Masukan jumlah baris : ");
    scanf("%d",&x);
    printf("Masukan jumlah kolom : ");
    scanf("%d",&y);
    

    for(int i = 0; i <= 3; i++){
        if(i==1)printf("Array A\n");
        else if(i==2) printf("Array 2\n");
        else if(i==3&& pilihan == 1)printf("\nHasil pertambahan matriks (A + B):\n");
        else if(i==3&& pilihan == 2)printf("\nHasil pengurangan matriks (A - B):\n");

        if (i==1){
       for(int l =0; l<y*x; l++){
        printf("A[%d][%d] = ", i, l + 1);
         scanf("%d", &a[l]);
       }
           printf("\nMatrix A");
           printf("\n");
        for(int l = 1; l<=y*x; l++){
        printf("%d ",a[l-1]);
         if(l%y==0)printf("\n");
        }
        printf("\n");
        }

        if (i==2){
       for(int l = 0; l<y*x; l++){
        printf("B[%d][%d] = ", i, l + 1);
        scanf("%d", &b[l]);
        }
            printf("\nMatrix B");
            printf("\n");
        for(int l = 1; l<=y*x; l++){
         printf("%d ",b[l-1]);
         if(l%y==0)printf("\n");  
        }
        printf("\n");
        }

        if(i==3){
        for(int l = 1; l<=y*x; l++){
        if(pilihan == 1) {c[l] = a[l-1] + b[l-1];}
        else if(pilihan == 2) {c[l] = a[l-1] - b[l-1];}
        
         printf("%d ",c[l]);
         if(l%y==0)printf("\n");
            }
        }
    }

    return 0;
}
