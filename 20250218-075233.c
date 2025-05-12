#include <stdio.h>
#include <math.h>

int main() {
    double radio = 10.0 / 2.0; // Diámetro / 2
    double area = M_PI * pow(radio, 2); // Fórmula del área

    printf("El área del círculo es: %.2f metros cuadrados\n", area);

    return 0;
}