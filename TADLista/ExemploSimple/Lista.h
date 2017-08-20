#ifndef LISTA_H
#define LISTA_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;

void opcao(node *LISTA, int op);
void insereInicio(node *LISTA);
void exibe(node *LISTA);
void exibeTamanho(node *LISTA);
void libera(node *LISTA);
node *aloca();
node *criarLista();
#endif
