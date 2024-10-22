#include <stdio.h>

int largestNumber(int a, int b);

int main(void) {

    int a, b;

    printf("Masukkan angka pertama: ");
    scanf("%i", &a);

    printf("Masukkan angka kedua: ");
    scanf("%i", &b);

    printf("Bilangan terbesar adalah: %i\n", largestNumber(a, b));
    return 0;
}

int largestNumber(int a, int b) {
    return (a > b) ? a : b;
}
