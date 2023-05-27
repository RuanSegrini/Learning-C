#include <stdio.h>
#include <string.h>

int main() { 

int codigo, quantidade;
double pagar, preco;

printf("Codigo do produto comprado: ");
scanf("%d", &codigo);
printf("Quantidade comprada: ");
scanf("%d", &quantidade);

if(codigo == 1){
     preco = 5.00;
     pagar =quantidade * preco;
     printf("Valor a pagar: R$%.2lf", pagar);
}
if(codigo == 2){
     preco = 3.50;
     pagar =quantidade * preco;
     printf("Valor a pagar: R$%.2lf", pagar);
}
if(codigo == 3){
     preco = 4.80;
     pagar =quantidade * preco;
     printf("Valor a pagar: R$%.2lf", pagar);
}
if(codigo == 4){
     preco = 8.90;
     pagar =quantidade * preco;
     printf("Valor a pagar: R$%.2lf", pagar);
}
if(codigo == 5){
     preco = 7.32;
     pagar =quantidade * preco;
     printf("Valor a pagar: R$%.2lf", pagar);
}

     return 0;
}  
