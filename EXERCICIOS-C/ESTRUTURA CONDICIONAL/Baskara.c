#include <stdio.h>
#include <string.h>
#include <math.h>

int main() { 

double A, B, C, x1, x2, delta;

printf("Coeficiente a: ");
scanf("%lf", &A);
printf("Coeficiente b: ");
scanf("%lf", &B);
printf("Coeficiente c: ");
scanf("%lf", &C);

delta = pow(B, 2) - 4 * (A) * (C);

if (delta < 0){

printf("Esta equacao nao possui raizes reais");

}
else{
    x1 = (-(B) + sqrt(delta)) / (2 * A);
    x2 = (-(B) - sqrt(delta)) / (2 * A);

    printf("X1 = %.4lf\n", x1);
    printf("X2 = %.4lf", x2);
    
}

    
      return 0;
}
