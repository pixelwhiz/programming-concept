#include <stdio.h>

#define MAKS 100 // Ukuran maksimum array

int main() {
    int arr[MAKS]; // Deklarasi array
    int n, i;
    int max;

    // Meminta input jumlah elemen
    printf("Masukkan jumlah elemen (maksimal %d): ", MAKS);
    scanf("%d", &n);

    // Memastikan jumlah elemen tidak melebihi MAKS
    if (n > MAKS) {
        printf("Jumlah elemen tidak boleh lebih dari %d.\n", MAKS);
        return 1; // Keluar dari program jika input tidak valid
    }

    // Mengisi array dengan input dari pengguna
    printf("Masukkan %d elemen:\n", n);
    for (i = 0; i < n; i++) {
        printf("Elemen %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Mencari nilai terbesar dalam array
    max = arr[0]; // Anggap elemen pertama adalah yang terbesar
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update nilai max jika elemen saat ini lebih besar
        }
    }

    // Menampilkan nilai terbesar
    printf("Nilai terbesar dalam array adalah: %d\n", max);

    return 0;
}


/**
 *
 * OUTPUT:
 *
 * Masukkan jumlah elemen (maksimal 100):5
 * Masukkan 5 elemen:
 * Elemen 1:20
 * Elemen 2:14
 * Elemen 3:3
 * Elemen 4:56
 * Elemen 5:45
 *
 * Nilai terbesar dalam array adalah: 56
 *
 */