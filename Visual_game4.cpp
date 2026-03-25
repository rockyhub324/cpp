#include <stdio.h>

int main() {
    int baris = 5, spasi;
    for (int i = 0; i < baris; i++) {
        for (spasi = 0; spasi < baris - i - 1; spasi++) {
            printf(" ");
        }

        int angka = 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", angka); 
            angka = angka * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}
