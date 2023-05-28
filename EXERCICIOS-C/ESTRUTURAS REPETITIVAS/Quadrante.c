#include <stdio.h>
#include <string.h>


int main() { 

double X, Y;

printf("Valor de X: ");
scanf("%lf", &X);
printf("Valor de Y: ");
scanf("%lf", &Y);

if(X > 0 && Y > 0){
    printf("Q1\n");
}
if(X < 0 && Y > 0){
    printf("Q2\n");
}
if(X < 0 && Y < 0){
    printf("Q3\n");
}
if(X > 0 && Y < 0){
    printf("Q4\n");
}

while(X != 0 && Y != 0){

printf("Valor de X: ");
scanf("%lf", &X);
printf("Valor de Y: ");
scanf("%lf", &Y);

if(X > 0 && Y > 0){
    printf("Q1\n");
}
if(X < 0 && Y > 0){
    printf("Q2\n");
}
if(X < 0 && Y < 0){
    printf("Q3\n");
}
if(X > 0 && Y < 0){
    printf("Q4\n");
}


}

      return 0;
}
