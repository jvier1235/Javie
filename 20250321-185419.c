#include <stdio.h>

int main() {
    int i;

    
    printf("Numeros divisibles entre 3:\n");
    for (i = 3; i < 1000; i += 3) {
        printf("%d, ", i);
    }
    printf("\n\n");

    
    printf("Numeros divisibles entre 2 y 7:\n");
    for (i = 14; i < 1000; i += 14) { // Mínimo común múltiplo de 2 y 7 es 14
        printf("%d, ", i);
    }
    printf("\n\n");

    printf("Numeros menores que 100, omitiendo los divisibles por 7:\n");
    for (i = 1; i < 100; i++) {
        if (i % 7 != 0) {
            printf("%d, ", i);
        }
    }
    printf("\n");

    return 0;
}