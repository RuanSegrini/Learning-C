#include <stdio.h>
#include <string.h>

int main() { 

double glicose;

printf("Digite a medida da glicose: ");
scanf("%lf", &glicose);

if(glicose <= 100){

    printf("Classificacao: normal");
    
}
if(glicose <= 140 && glicose > 100){

    printf("Classificacao: Elevado");

}
if(glicose > 140){

   printf("Classificacao: Diabets"); 

}



  return 0;
}  
