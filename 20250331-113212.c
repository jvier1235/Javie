#include <stdio.h>

int main() {
    int A[] = {3, 5, 6, 8, 4, 7, 8, 5, 3, 1};
    int B[] = {3, 4, 6, 8, 9, 1, 2, 3, 0, 9};

    // Operaciones
    int resultado1 = A[3] % (B[2] / 2);
    int resultado2 = B[A[1]] - A[9];
    int resultado3 = A[0] + A[1 + 2];
    int resultado4 = A[5] + B[5];
    float resultado5 = (float)A[3] / B[2] / 2;  // Se usa float para obtener un resultado decimal

    // Imprimir resultados
    printf("A[3] mod (B[2] / 2) = %d\n", resultado1);
    printf("B[A[1]] - A[9] = %d\n", resultado2);
    printf("A[0] + A[1 + 2] = %d\n", resultado3);
    printf("A[5] + B[5] = %d\n", resultado4);
    printf("(A[3] / B[2]) / 2 = %.2f\n", resultado5);

    return 0;
}