#include <stdio.h>
#include <string.h>

int main() { 

    double gasto, consumo;
    int distancia;

    printf("Distancia percorrida: ");
    scanf("%d", &distancia);
    printf("Combustivel gasto: ");
    scanf("%lf", &gasto);

consumo = distancia / gasto;

    printf("Consumo medio = %.3lf", consumo);

    return 0;
}
