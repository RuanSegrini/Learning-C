#include <stdio.h>
#include <string.h>


int main() { 

double base, altura, area, perimetro, diagonal;

    printf("Base do retangulo: ");
    scanf("%lf", &base);
    printf("Altura do retangulo: ");
    scanf("%lf", &altura);


area = base * altura;
perimetro = 2 * (base + altura);
diagonal =  sqrt(((altura * altura)+(base * base)));


    printf("AREA = %lf\n", area);
    printf("PERIMETRO = %lf\n", perimetro);
    printf("DIAGONAL = %lf", diagonal);


     return 0;
}
