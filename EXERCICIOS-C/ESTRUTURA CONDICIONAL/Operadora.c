#include <stdio.h>
#include <string.h>

int main() { 

int minutos;
double pagar;

printf("Digite a quantidade de minutos: ");
scanf("%d", &minutos);

if(minutos <= 100 ){
pagar = 50.00 + 0;
printf("Valor a pagar: R$%.2lf", pagar);
}
else{

pagar = 50.00 + ((minutos - 100) * 2);
printf("Valor a pagar: R$%.2lf", pagar);

}

     return 0;
}
