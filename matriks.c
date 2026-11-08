#include <stdio.h>

int main() {
    int A[4][4];
    int B[4][1];
    int C[4][1];

    int i, j, k;

    // Input matriks A (4x4)
    printf("Masukkan elemen matriks A (4x4):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input vektor B (4x1)
    printf("Masukkan elemen vektor B (4x1):\n");
    for (i = 0; i < 4; i++) {
        scanf("%d", &B[i][0]);
    }

    // Perkalian matriks A dengan vektor B
    for (i = 0; i < 4; i++) {
        C[i][0] = 0;
        for (j = 0; j < 4; j++) {
            C[i][0] += A[i][j] * B[j][0];
        }
    }

    // Menampilkan hasil
    printf("\nHasil perkalian A x B:\n");
    for (i = 0; i < 4; i++) {
        printf("%d\n", C[i][0]);
    }

    return 0;
}