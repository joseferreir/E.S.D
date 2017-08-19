#include <stdio.h>
#include <stdlib.h>
struct Node{
	int num;
	int tamanho;
	struct Node *prox;
}; 
typedef struct Node node;

void inicia(node *LISTA);
int menu(void);
void opcao(node *LISTA, int op);
node *criaNo();
// void insereFim(node *LISTA);
void insereInicio(node *LISTA);
void exibe(node *LISTA);
void exibeTamanho(node *LISTA);
void libera(node *LISTA);
void inserePorPosicao(node *LISTA);
node *aloca();
