#include "Lista.h"
#include "Pilha.h"
struct Pilha {
node* prim;

};

Pilha* pilha_cria(){

Pilha* p = (Pilha*) malloc(sizeof(Pilha));
p->prim = NULL;
return p;

}

void empilha(Pilha *pilha,int var){
      insereFim(pilha->prim,var);

}


int desempilha(Pilha *p){

    int v= 0;
    if (vazia(p->prim)) {
        printf("Pilha vazia.\n");
        exit(1);
/* aborta programa */
    }
 //  v = p->prim->num;
    p->prim = retiraFim(p->prim);
    return v;

}

int topo(Pilha *pilha){
      return pilha->prim;

}

