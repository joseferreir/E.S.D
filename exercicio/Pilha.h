#ifndef PILHA_H
#define PILHA_H


typedef struct Pilha Pilha;

Pilha* pilha_cria();

void empilha(Pilha *pilha, int var);

int desempilha(Pilha *p);

int topo(Pilha *pilha);
#endif


