#include <stdio.h>

int main() {
    // Deklarasi array dengan ukuran n
    const int n = 5; // Misalkan kita ingin membuat array dengan 5 elemen
    int arr[n]; // Deklarasi variabel array of int

    // Mengisi array
    for (int i = 0; i < n; i++) {
        arr[i] = i * 2; // Mengisi dengan nilai 0, 2, 4, 6, 8
    }

    // Menampilkan isi array
    printf("Isi array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Menampilkan elemen array
    }
    printf("\n"); // Untuk membuat baris baru

    return 0;
}


/**
 *
 * OUTPUT
 *
 * Isi array: 0 2 4 6 8
 *
 */