#include <stdio.h>
#include <math.h>
#include <stdlib.h>


double area_triangulo(float a, float b, float c);

int main() {
    float a, b, c;
    double area;

    printf("Ingrese el valor del lado a: ");
    scanf("%f", &a);

    printf("Ingrese el valor del lado b: ");
    scanf("%f", &b);

    printf("Ingrese el valor del lado c: ");
    scanf("%f", &c);

    area = area_triangulo(a, b, c);

    printf("El área del triángulo es: %2.4lf\n", area);

    system("pause");

    return 0;
}

double area_triangulo(float a, float b, float c) {
    double p, area;

    p = (a + b + c) / 2.0;  

    area = sqrt(p * (p - a) * (p - b) * (p - c)); 
    return area;
}