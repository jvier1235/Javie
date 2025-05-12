#include <stdio.h>

int main() {
    char cadena1[100];
    char cadena2[100];
    int resultado;

    printf("Introduce la primera palabra: ");
    scanf("%s", cadena1);

    printf("Introduce la segunda palabra: ");
    scanf("%s", cadena2);

    
    resultado = strcmp(cadena1, cadena2);


    if (resultado == 0) {
        printf("Ambas palabras son iguales.\n");
    } else if (resultado < 0) {
        printf("La palabra menor es: '%s'\n", cadena2);
        printf("La palabra mayor es: '%s'\n", cadena1);
    } else {
        printf("La palabra menor es: '%s'\n", cadena1);
        printf("La palabra mayorq es: '%s'\n", cadena2);
    }

    
    printf("Valor de comparación: %d\n", resultado);

    return 0;
}