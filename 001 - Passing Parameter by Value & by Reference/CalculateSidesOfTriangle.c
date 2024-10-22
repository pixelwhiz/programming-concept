#include <stdio.h>
#include <math.h>

#define PI 3.14159265

double degree_to_radian(double degree);

double degree_to_radian(double degree) {
    return degree * (PI / 180.0);
}

int main() {
    double sudut_BAC, panjang_AB, panjang_BC;

    printf("Masukkan besar sudut BAC (dalam derajat): ");
    scanf("%lf", &sudut_BAC);

    printf("Masukkan panjang sisi AB (dalam meter): ");
    scanf("%lf", &panjang_AB);

    double sudut_BAC_radian = degree_to_radian(sudut_BAC);

    panjang_BC = panjang_AB * sin(sudut_BAC_radian);

    printf("Panjang sisi BC adalah: %.2lf meter\n", panjang_BC);

    return 0;
}


/**
 *
 * Output
 *
 * Masukkan besar sudut BAC (dalam derajat):90
 * Masukkan panjang sisi AB (dalam meter):5
 * Panjang sisi BC adalah: 5.00 meter
 *

