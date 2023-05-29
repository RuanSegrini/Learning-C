#include <stdio.h>
#include <string.h>

int main() {  

int codigo, gasolina, alcool, diesel;

gasolina = 0;
alcool = 0;
diesel = 0;

printf("Codigo 1: Alcool\n");
printf("Codigo 2: Gasolina\n");
printf("Codigo 3: Diesel\n");
printf("Codigo 4: Fim\n");

printf("\n\nInforme um codigo (1, 2, 3) ou 4 para parar:");
scanf("%d", &codigo);

if(codigo == 1){
    gasolina++;
}
if(codigo == 2){
    alcool++;
}
if(codigo == 3){
    diesel++;
}

while(codigo != 4){

printf("Informe um codigo (1, 2, 3) ou 4 para parar:");
scanf("%d", &codigo);

if(codigo == 1){
    alcool++;
}
if(codigo == 2){
    gasolina++;
}
if(codigo == 3){
    diesel++;
}

}


printf("MUITO OBRIGADO\n");
printf("Alcool: %d\n", alcool);
printf("Gasolina: %d\n", gasolina);
printf("Diesel: %d\n", diesel);


    return 0;
}
