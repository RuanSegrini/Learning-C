#include <stdio.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");    
}

int main(){

    int n, entre, abaixo, acima;
    double TotalCompra, TotalVenda, lucro;

    TotalCompra = 0;
    TotalVenda = 0;
   

    printf("Serao digitados dados de quantos produtos? ");
    scanf("%d", &n);

    char nome[n][50];
    double compra[n], venda[n], porcentagemlucros[n];
   
    for (int i=0; i<n; i++) {
        printf("Produto %d\n", i + 1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nome[i], 50);
        printf("Preco de compra: ");
        scanf(" %lf", &compra[i]);
        printf("Preco de venda: ");
        scanf(" %lf", &venda[i]);
        TotalCompra = TotalCompra + compra[i];
        TotalVenda = TotalVenda + venda[i];    
    }

     for (int i=0; i<n; i++) {
        porcentagemlucros[i] = (venda[i] - compra[i]) / compra[i] * 100.0;
    }

    abaixo = 0;
    entre = 0;
    acima = 0;

    for (int i=0; i<n; i++) {
        if (porcentagemlucros[i] < 10.0) {
            abaixo++;
        }
        else if (porcentagemlucros[i] < 20.0) {
            entre++;
        }
        else {
            acima++;
        }
    }

    lucro = TotalVenda - TotalCompra;

    printf("RELATORIO: \n");
    printf("Lucro abaixo de 10%%: %d\n", abaixo);
    printf("Lucro entre  10%% e 20%%: %d\n", entre);
    printf("Lucro acima de 20%%: %d\n", acima);
    printf("Valor total de compra: %.2lf\n", TotalCompra);
    printf("Valor total de venda: %.2lf\n", TotalVenda);
    printf("Lucro total: %.2lf", lucro);

    return 0;
}
