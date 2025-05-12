#include <stdio.h>

int main() {
    int N, suma = 0;
    
    printf("Ingrese un número: ");
    scanf("%d", &N);
    
    printf("Suma: ");
    
    for (int i = 1; i <= N; i++) {
        suma += i;
        printf("%d+", i);
    }
    
    printf("\b=%d\n", suma); // \b elimina el último '+'
    
    return 0;
}