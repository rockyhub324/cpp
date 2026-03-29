//Nama : Rocky Gunawan
//Kelas : SI-B
//NIM :825250080

#include <stdio.h>
#include <math.h>

float dotProduct(float A[3], float B[3]){
    return A[0]*B[0] + A[1]*B[1] + A[2]*B[2];
}

float panjang(float V[3]){
    return sqrt(V[0]*V[0] + V[1]*V[1] + V[2]*V[2]);
}

void crossProduct(float A[3], float B[3], float result[3]){
    result[0] = A[1]*B[2] - A[2]*B[1];
    result[1] = A[2]*B[0] - A[0]*B[2];
    result[2] = A[0]*B[1] - A[1]*B[0];
}

int main(){
    float A[3], B[3], plus[3], min[3], crossAB[3], crossBA[3];
    float dot, sudut, jarak, magCrossAB, magCrossBA;

    printf("------Perhitungan Vektor 3D------\n");

    printf("Masukkan komponen vektor A (x y z): ");
    scanf("%f %f %f", &A[0], &A[1], &A[2]);
    printf("Masukkan komponen vektor B (x y z): ");
    scanf("%f %f %f", &B[0], &B[1], &B[2]);

    for(int i=0; i<3; i++) plus[i] = A[i] + B[i];
    printf("\nA + B = (%.2f, %.2f, %.2f)\n", plus[0], plus[1], plus[2]);

    for(int i=0; i<3; i++) min[i] = A[i] - B[i];
    printf("A - B = (%.2f, %.2f, %.2f)\n", min[0], min[1], min[2]);

    dot = dotProduct(A, B);
    printf("Dot Product = %.2f\n", dot);

    sudut = acos(dot / (panjang(A) * panjang(B))) * 180.0 / M_PI;
    printf("Sudut antara A dan B = %.2f derajat\n", sudut);

    jarak = sqrt(pow(B[0]-A[0], 2) + pow(B[1]-A[1], 2) + pow(B[2]-A[2], 2));
    printf("Jarak antara A dan B = %.2f\n", jarak);

    crossProduct(A, B, crossAB);
    printf("A x B = (%.2f, %.2f, %.2f)\n", crossAB[0], crossAB[1], crossAB[2]);

    crossProduct(B, A, crossBA);
    printf("B x A = (%.2f, %.2f, %.2f)\n", crossBA[0], crossBA[1], crossBA[2]);

    magCrossAB = panjang(crossAB);
    printf("||A x B|| = %.3f\n", magCrossAB);

    magCrossBA = panjang(crossBA);
    printf("||B x A|| = %.3f\n", magCrossBA);


    return 0;
}