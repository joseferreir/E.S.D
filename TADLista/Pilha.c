#include "Lista.h"

struct Pilha {
	int info;
	struct Pilha* prox;
};
typedef struct pilha Pilha;
typedef struct pilha Pilha;

Pilha* pilha_cria(){

	*pilha = NUL;
	return *Pilha;

}

Pilha* empilha(int var){
Pilha *nova = (Pilha*) malloc(sizeof (Pilha));
nova->info = var;
nova->prox = *Pilha;
*Pilha = nova;

}


Pilha* desempilha(){
if (*pilha != NULL) {
Pilha *aux = *pilha;
*info = (*pilha)->info;
*pilha = (*pilha)->prox;
free(aux);
}

}

Pilha* topo(){
return *Pilha;

}
