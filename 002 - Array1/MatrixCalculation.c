#include <stdio.h>

#define MAKS 2 // Indeks MAKS untuk ukuran matriks

int main() {
    int A[MAKS][MAKS], B[MAKS][MAKS], C[MAKS][MAKS];
    int i, j, ordo;

    do {
        // Meminta input ordo matriks
        printf("Masukkan ordo matriks (1-2): ");
        scanf("%d", &ordo);
    } while (ordo < 1 || ordo > MAKS);

    // Input elemen matriks A
    printf("Masukkan elemen matriks A:\n");
    for (i = 0; i < ordo; i++) {
        for (j = 0; j < ordo; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Input elemen matriks B
    printf("Masukkan elemen matriks B:\n");
    for (i = 0; i < ordo; i++) {
        for (j = 0; j < ordo; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Penjumlahan matriks A dan B
    for (i = 0; i < ordo; i++) {
        for (j = 0; j < ordo; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Menampilkan matriks A
    printf("\nMatriks A:\n");
    for (i = 0; i < ordo; i++) {
        for (j = 0; j < ordo; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Menampilkan matriks B
    printf("\nMatriks B:\n");
    for (i = 0; i < ordo; i++) {
        for (j = 0; j < ordo; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // Menampilkan matriks C
    printf("\nMatriks C (A + B):\n");
    for (i = 0; i < ordo; i++) {
        for (j = 0; j < ordo; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}


/**
 *
 * INPUT
 *
 * Masukkan ordo matriks (1-2):2
 * Masukkan elemen matriks A:
 * A[0][0]:1
 * A[0][1]:2
 * A[1][0]:3
 * A[1][1]:4
 *
 * Masukkan elemen matriks B:
 * B[0][0]:5
 * B[0][1]:6
 * B[1][0]:7
 * B[1][1]:8
 *
 */

/**
 *
 * OUTPUT
 *
 * Matriks A:
 * 1 2
 * 3 4
 *
 * Matriks B:
 * 5 6
 * 7 8
 *
 * Matriks C (A + B):
 * 6 8
 * 10 12
 *
 */