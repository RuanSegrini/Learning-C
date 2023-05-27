#include <stdio.h>
#include <string.h>
#include <math.h>

int main() { 

double salario, novoSalario, aumento;

printf("Digite o salario da pessoa: ");
scanf("%lf", &salario);

if(salario <= 1000){
    novoSalario = (salario * 20 / 100) +salario;
    aumento = novoSalario - salario;
    printf("Novo salario: R$%.2lf\n", novoSalario);
    printf("Aumento: R$%.2lf\n", aumento);
    printf("Porcentagem = 20%%");

}
if(salario <= 3000 && salario > 1000){
    novoSalario = (salario* 15 / 100) + salario;
    aumento = novoSalario - salario;
    printf("Novo salario: R$%.2lf\n", novoSalario);
    printf("Aumento: R$%.2lf\n", aumento);
    printf("Porcentagem = 15%%");

}
if(salario <= 8000 && salario > 3000){
    novoSalario = (salario * 10.0 / 100) + salario;
    aumento = novoSalario - salario;
    printf("Novo salario: R$%.2lf\n", novoSalario);
    printf("Aumento: R$%.2lf\n", aumento);
    printf("Porcentagem = 10%%");

}
if(salario > 8000){
    novoSalario = (salario * 5 / 100) + salario;
    aumento = novoSalario - salario;
    printf("Novo salario: R$%.2lf\n", novoSalario);
    printf("Aumento: R$%.2lf\n", aumento);
    printf("Porcentagem = 5%%");

}

 return 0;
}
