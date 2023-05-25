#include <stdio.h>
#include <string.h>


int main() { 

double A, B, C, areaQuadrado, areaTriangulo, areaTrapezio;

printf("Digite a medida A: ");
scanf("%lf", &A);
printf("Digite a medida B: ");
scanf("%lf", &B);
printf("Digite a medida C: ");
scanf("%lf", &C);


areaQuadrado = pow(A, 2);
areaTriangulo = A * B / 2;
areaTrapezio = ((A + B) * C) / 2;


printf("AREA DO QUADRADO = %.4lf\n", areaQuadrado);
printf("AREA DO TRIANGULO = %.4lf\n", areaTriangulo);
printf("AREA DO TRAPEZIO = %.4lf", areaTrapezio);


    return 0;
}
