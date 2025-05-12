#include <stdio.h>


struct CD {
    char titulo[100];
    char artista[50];
    int num_canciones;
    float precio;
};

int main() {
    
    struct CD mi_cd;

    
    printf("Introduce el título del CD: ");
    fgets(mi_cd.titulo, sizeof(mi_cd.titulo), stdin);

    printf("Introduce el artista: ");
    fgets(mi_cd.artista, sizeof(mi_cd.artista), stdin);

    printf("Introduce el número de canciones: ");
    scanf("%d", &mi_cd.num_canciones);

    printf("Introduce el precio: ");
    scanf("%f", &mi_cd.precio);

    
    printf("\nInformación del CD:\n");
    printf("Título: %s", mi_cd.titulo);
    printf("Artista: %s", mi_cd.artista);
    printf("Número de canciones: %d\n", mi_cd.num_canciones);
    printf("Precio: %.2f\n", mi_cd.precio);

    return 0;
}