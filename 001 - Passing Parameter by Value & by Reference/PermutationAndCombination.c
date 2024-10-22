#include <stdio.h>

void permutation(int n, int r);
void combination(int n, int r);

int main(void) {
    int N, R;
    printf("Masukkan N: ");
    scanf("%i", &N);

    printf("Masukkan R: ");
    scanf("%i", &R);

    permutation(N, R);
    combination(N, R);

}

void permutation(int n, int r) {

    int factorial1 = 1, factorial2 = 1;
    int a = n - r;

    for (int i = 1; i <= n; i++) {
        factorial1 *= i;
    }

    for (int i = 1; i <= a; i++) {
        factorial2 *= i;
    }

    int p = factorial1 / factorial2;
    printf("Permutation = %i\n", p);

}

void combination(int n, int r) {
    int factorialR = 1, factorial1 = 1, factorial2 = 1;
    int a = n - r;

    for (int i = 1; i <= n; i++) {
        factorial1 *= i;
    }

    for (int i = 1; i <= r; i++) {
        factorialR *= i;
    }

    for (int i = 1; i <= a; i++) {
        factorial2 *= i;
    }

    int hasil = factorial1 / (factorialR * factorial2);
    printf("Combination = %i\n", hasil);
}



/**
 *
 * Output
 *
 * Masukkan N:5
 * Masukkan R:3
 * Permutation = 60
 * Combination = 0
 *
 */