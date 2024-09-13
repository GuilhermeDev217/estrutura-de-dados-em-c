#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    int idade;
    float renda;
    char nome[100];
} Cliente;

int main(void) {
    Cliente cadastro[1];
    int maioresDeIdade = 0;

    printf("Cadastro de clientes:\n");
    for (int i = 0; i < 1; i++) {
        printf("\nDigite o ID do %dº cliente: ", i + 1);
        scanf("%d", &cadastro[i].id);
        
        printf("Digite a idade do %dº cliente: ", i + 1);
        scanf("%d", &cadastro[i].idade);
        
        printf("Digite a renda do %dº cliente: ", i + 1);
        scanf("%f", &cadastro[i].renda);
        
        while (getchar() != '\n');

        printf("Digite o nome do %dº cliente: ", i + 1);
        scanf("%99[^\n]", cadastro[i].nome);
        getchar();
    }

    printf("\nClientes maiores de idade:\n");
    for (int i = 0; i < 1; i++) {
        if (cadastro[i].idade >= 18) {
            printf("Nome: %s, Idade: %d", cadastro[i].nome, cadastro[i].idade);
            maioresDeIdade++;
        }
    }

    printf("\nTotal de maiores de idade: %d\n", maioresDeIdade);

    return 0;
}
