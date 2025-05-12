#include <stdlib.h>

int main() {
    char palabral[50];
    char palabra2[50];
    char resultado[1000];

    printf("Palabral: ");
    scanf("%s", palabral);

    printf("Palabra 2: ");
    scanf("%s", palabra2);

    int len = strlen(palabral);  
    strcat(resultado, palabral); 
    for(int i = 0; i < len; i++) {
        strcat(resultado, palabra2);  
    }
    printf("Palabral: %s\n", resultado);

    system("pause");
    return 0;
}