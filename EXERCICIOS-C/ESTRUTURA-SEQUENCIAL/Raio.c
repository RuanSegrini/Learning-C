#include <stdio.h>
#include <string.h>

int main() { 

double raio, area;

printf("Digite o valor do raio do circulo: ");
scanf("%lf", &raio);

area = 3.14159 * pow(raio, 2);

printf("AREA = %.3lf", area);

return 0;
}
