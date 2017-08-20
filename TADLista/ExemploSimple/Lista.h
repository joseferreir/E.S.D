#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;

void inicia(node *LISTA);
void opcao(node *LISTA, int op);
void insereInicio(node *LISTA);
void exibe(node *LISTA);
void exibeTamanho(node *LISTA);
void libera(node *LISTA);
void inserePorPosicao(node *LISTA);
node *aloca();
