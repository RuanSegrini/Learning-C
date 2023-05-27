#include <stdio.h>
#include <string.h>


int main() { 

double X, Y;

printf("Valor de X: ");
scanf("%lf", &X);
printf("Valor de Y: ");
scanf("%lf", &Y);

if(X > 0 && Y > 0){
    printf("Q1");
}
if(X < 0 && Y > 0){
    printf("Q2");
}
if(X < 0 && Y < 0){
    printf("Q3");
}
if(X > 0 && Y < 0){
    printf("Q4");
}
if(X == 0 && Y == 0){
    printf("Origem");
}
if(X == 0 && X != Y){
    printf("Eixo Y");
}
if(Y == 0 && X != Y){
    printf("Eixo X");
}

      return 0;
}
