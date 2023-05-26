#include <stdio.h>
#include <string.h>

int main() { 

double distancia1, distancia2, distancia3;

printf("Digite as tres distancias:\n");
scanf("%lf\n %lf\n %lf", &distancia1, &distancia2, &distancia3);


if(distancia1 > distancia2 && distancia1 > distancia3){

    printf("Maior Distancia: %.2lf", distancia1);

}
if(distancia2 > distancia1 && distancia2 > distancia3){

    printf("Maior Distancia: %.2lf", distancia2);

}
if(distancia3 > distancia2 && distancia3 > distancia1){

    printf("Maior Distancia: %.2lf", distancia3);

}


  return 0;
} 
