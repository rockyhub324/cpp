#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int A[10][10], B[10][10], C[10][10];

    printf("Masukkan jumlah baris matriks pertama: ");
    scanf("%d", &r1);
    printf("Masukkan jumlah kolom matriks pertama: ");
    scanf("%d", &c1);

    printf("Masukkan jumlah baris matriks kedua: ");
    scanf("%d", &r2);
    printf("Masukkan jumlah kolom matriks kedua: ");
    scanf("%d", &c2);

    if (c1 != r2) {
        printf("Matriks tidak dapat dikalikan (kolom A != baris B).\n");
        return 0;
    }


    printf("\nMasukkan elemen matriks pertama (A):\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("A[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
         printf("\nMatrix A");
           printf("\n");
    

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d ", A[i][j]);
           if(j==c1-1)printf("\n");  
        }
    }

    printf("\nMasukkan elemen matriks kedua (B):\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("B[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }
         printf("\nMatrix B");
           printf("\n");


    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", B[i][j]);
           if(j==c2-1)printf("\n");  
        }
    }


    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nHasil perkalian matriks (A x B):\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
