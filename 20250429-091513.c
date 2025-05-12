#include <stdio.h>

#define MAX 100

int maximo(int a, int b) {
    return (a > b) ? a : b;
}


int leer_caracteres(char *caracteres) {
    int i = 0;
    char c;
    printf("Introduce caracteres (espacio o enter para terminar):\n");
    while ((c = getchar()) != ' ' && c != '\n' && i < MAX-1)
        caracteres[i++] = c;
    caracteres[i] = '\0';
    return i;
}


int leer_numeros(int *numeros) {
    int n, i;
    printf("¿Cuántos números?: ");
    scanf("%d", &n);
    if (n > MAX) n = MAX;
    printf("Introduce %d números:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &numeros[i]);
    return n;
}

int main() {
    int num1, num2, i, cantidad;
    char caracteres[MAX];
    int numeros[MAX];

    printf("Introduce primer número: ");
    scanf("%d", &num1);
    printf("Introduce segundo número: ");
    scanf("%d", &num2);

    printf("Mayor: %d\n", maximo(num1, num2));

    getchar(); 
    cantidad = leer_caracteres(caracteres);
    printf("Caracteres invertidos:\n");
    for (i = cantidad - 1; i >= 0; i--)
        putchar(caracteres[i]);
    printf("\n");

    cantidad = leer_numeros(numeros);
    printf("Números invertidos:\n");
    for (i = cantidad - 1; i >= 0; i--)
        printf("%d ", numeros[i]);
    printf("\n");

    return 0;
}
    