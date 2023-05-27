#include <stdio.h>
#include <string.h>

int main() { 

int numero1, numero2, resto;

printf("Digite dois numeros inteiros: ");
scanf("%d %d", &numero1, &numero2);

if(numero1 > numero2){

resto = numero1 % numero2;

if(resto == 0){
    printf("Sao multiplos");
}
else{
    printf("Nao sao multiplos");
}
}
if(numero2 > numero1){

resto = numero2 % numero1;

if(resto == 0){
    printf("Sao multiplos");
}
else{
    printf("Nao sao multiplos");
}
}
if(numero1 == numero2 ){
   printf("Sao Multiplos"); 
}

      return 0;
}
