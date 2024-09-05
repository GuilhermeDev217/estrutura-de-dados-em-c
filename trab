#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int id;
	int idade;
	int renda;
	char nome;
}cliente;

int main(void){
	cliente cadastro[5];
	printf("Cadastro de clientes:");
	for(int i=0;i<5;i++){
		
		printf("\n Digite o id do %d cliente", i+1);
		scanf("%d", &cadastro[i].id);
		printf("\n Digite a idade do %d cliente", i+1);
		scanf("%d", &cadastro[i].idade);
		printf("\n Digite a renda do %d cliente", i+1);
		scanf("%f", &cadastro[i].renda);
		printf("\n Digite o nome do %d cliente", i+1);
		gets(cadastro[i].nome);
    }
    for(int i=0; i=5;i++){
    	if(cadastro[i].idade>=18){
    		puts(cadastro[i].nome);
		}
	}
	return 0;
}
