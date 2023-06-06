#include <stdio.h>

int main(){

    int  n, TotalCoelhos, TotalRatos, TotalSapos, quantidade, total;
    char escala;
    double PercentualCoelhos, PercentualSapos, PercentualRatos;

    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &n);
      scanf("%c", &escala);
   TotalCoelhos = 0;
   TotalRatos = 0;
   TotalSapos = 0;
   

 for (int i = 0; i<n; i++) {
printf("Quantidade de cobaias: ");
scanf("%d", &quantidade);

printf("Tipo de cobaia: ");
scanf(" %c", &escala);

if(escala == 'C'){
    TotalCoelhos = TotalCoelhos + quantidade;
}
if(escala == 'R'){
    TotalRatos = TotalRatos + quantidade;
}
if(escala == 'S'){
    TotalSapos = TotalSapos + quantidade;
}

       }
     
   total = TotalSapos + TotalRatos + TotalCoelhos;
   PercentualCoelhos = ((double)TotalCoelhos / total) * 100.0;
    PercentualRatos = ((double)TotalRatos / total) * 100.0;
    PercentualSapos  = ((double)TotalSapos / total ) * 100.0;
    printf("\nRELATORIO FINAL:\n");
     printf("Total: %d cobaias\n", total);
      printf("Total de coelhos: %d\n", TotalCoelhos);
       printf("Total de ratos: %d\n", TotalRatos);
        printf("Total de sapos: %d\n", TotalSapos); 
         printf("Percentual de coelhos: %.2lf\n", PercentualCoelhos);
          printf("Percentual de ratos: %.2lf\n", PercentualRatos);
           printf("Percentual de sapos: %.2lf\n", PercentualSapos);

        
    return 0;
}
