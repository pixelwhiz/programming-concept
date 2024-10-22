#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Meminta input dari pengguna
    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &n);

    // Menampilkan deret Fibonacci
    printf("Deret Fibonacci sampai %d: ", n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", first);
            continue;
        }
        if (i == 2) {
            printf("%d ", second);
            continue;
        }
        next = first + second; // Menentukan deret berikutnya
        first = second;        // Memperbarui nilai first
        second = next;        // Memperbarui nilai second

        printf("%d ", next); // Menampilkan deret Fibonacci
    }

    printf("\n"); // Untuk membuat baris baru
    return 0;
}


/**
 *
 * OUTPUT
 *
 * Masukkan sebuah bilangan:8
 * Deret Fibonacci sampai 8: 0 1 1 2 3 5 8 13
 *
 */