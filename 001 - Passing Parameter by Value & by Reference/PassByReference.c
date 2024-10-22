#include <stdio.h>

void naikkan_dengan_2(int *a, int *b);

void naikkan_dengan_2(int *a, int *b) {
    *a += 2;
    *b += 2;
}

int main(void) {
    int x, y;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &x);

    printf("Masukkan bilangan kedua: ");
    scanf("%d", &y);

    naikkan_dengan_2(&x, &y);

    printf("Hasil setelah dinaikkan 2: %d dan %d\n", x, y);

    return 0;
}


/**
 *
 * Output
 *
 * Masukkan bilangan pertama:5
 * Masukkan bilangan kedua:8
 * Hasil setelah dinaikkan 2: 7 dan 10
 *