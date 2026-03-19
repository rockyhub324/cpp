// Nama : Rocky Gunawan
// NIM : 825250080

#include <stdio.h>
#include <math.h>

int main () {
float E = 3.5;
float l = 1.0;
float R = 17.3;
float C = 5.0;
float f = 0.05;
float L = 0.01;
float theta = 45.00;
float phi = 3.14;

float alpha;

alpha = E * l * cos(theta) / sqrt(pow(R, 2) + pow((2 * phi * f * L - 1/(2 * phi * f * C)), 2));

printf("Hasil dari Alpha adalah %.5f", alpha);
printf("----Terima Kasih----\n");

return 0;
}