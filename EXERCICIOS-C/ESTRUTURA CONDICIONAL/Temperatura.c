#include <stdio.h>
#include <string.h>

int main() { 
    
double Fah, Cel, temperatura;
char escala;

printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
scanf("%c", &escala);

if(escala == 'C'){

    printf("Digite a temperatura em Celsius:");
    scanf("%lf", &temperatura);
    Fah = (temperatura * 1.8) + 32;
    printf("Temperatura equivalente em Fahrenheit: %.2lf", Fah);

}
if(escala == 'F'){

    printf("Digite a temperatura em Fahrenheit:");
    scanf("%lf", &temperatura);
    Cel =(temperatura - 32)/ 1.8;
    printf("Temperatura equivalente em Celsius: %.2lf", Cel);

}

    return 0;
}
