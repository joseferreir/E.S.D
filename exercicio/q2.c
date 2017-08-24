#include "Fila.h"
#include "Pilha.h"

void inOrde(Fila *f, Pilha *p;){

while(!vazia(f))
    empilha(p,retira(f));

    while(!vazia(p))
    insere(f,desempilha());
}
