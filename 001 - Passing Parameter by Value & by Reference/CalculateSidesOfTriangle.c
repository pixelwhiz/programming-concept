#include <stdio.h>
#include <math.h>

#define PI 3.14159

void panjang_sisi(double sudutBAC, double BC, double AB) {
    double sudutBAC_radian = sudutBAC * PI / 180;

    BC = AB * tan(sudutBAC_radian);

    printf("Panjang sisi BC adalah %.2f meter\n", BC);

}

int main() {
    double sudutBAC, AB, BC;

    printf("Masukkan besar sudut BAC (dalam derajat): ");
    scanf("%lf", &sudutBAC);

    printf("Masukkan panjang sisi AB (dalam meter): ");
    scanf("%lf", &AB);

    panjang_sisi(sudutBAC, BC, AB);

    return 0;
}


/**
 *
 * OUTPUT
 *
 * Masukkan besar sudut BAC (dalam derajat):90
 * Masukkan panjang sisi AB (dalam meter):5
 * Panjang sisi BC adalah: 5.00 meter
 *
 */
