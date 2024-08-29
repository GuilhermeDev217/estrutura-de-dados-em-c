#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define TAM 10

typedef struct {
	int vet[TAM];
	int topo;
} pilhavet;

void empilha(int valor, pilhavet *p) {
    if(p ->topo == TAM-1){
        printf("/nPilha Cheia");
        exit(0);
    }
    p-> topo++;
    p-> vet[p->topo]=valor;   
    
}
int desempilha(pilhavet*p){
    int aux;
    if(p -> topo<0){
        printf("\nPilha Vazia")
        exit(1);
    }
    aux = p -> vet [p->topo];
    p-> topo--;
    return aux;
}
