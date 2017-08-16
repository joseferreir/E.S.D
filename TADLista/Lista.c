#include <stdio.h>
#include "Lista.h"

struct lista {
	int info;
	struct lista* prox;
};
typedef struct lista Lista;

/* Função cria - Aloca e retorna uma Lista */
Lista* lista_cria (void){

return NULL;

}

/* Função insere - Insere um Novo Elemento na Lista */
Lista* lista_insere_inicio (Lista* list, int val){

	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = val;
	novo->prox = list;
	return novo;
}

/* Função acessa - Retorna os valores das coordenadas de um ponto */
int lista_vazia (Lista* list){
	return (list == NULL);

}

/* função busca: busca um elemento na lista */
Lista* busca (Lista* lst, int v)
{
	Lista* p;
	for (p=lst; p!=NULL; p = p->prox) {
	if (p->info == v)
		return p;
}

return NULL; /* não achou o elemento */
}


int lista_remove_inicio(Lista* list){


}



/* Função Remove - Atribui novos valores às coordenadas de um ponto */
int lista_remove (Lista* list, int val){

Lista* a = NULL; /* ponteiro para elemento anterior */
Lista* p = list; /* ponteiro para percorrer a lista */

/* procura elemento na lista, guardando anterior */
while (p != NULL && p->info != val) {
	a = p;
	p = p->prox;
}
/* verifica se achou elemento */
if (p == NULL)
return list; /* não achou: retorna lista original */
/* retira elemento */
if (a == NULL)
{ /* retira elemento do inicio */
list = p->prox; }
else { /* retira elemento do meio da lista */
a->prox = p->prox; }
free(p);
return list;
}

/* Função Imprime - Impri */
void lista_imprime (Lista* list){

	Lista* p;
	for (p = list; p != NULL; p = p->prox)
	printf("Info : %d \n", p->info);
}

int lista_libera (Lista* list){

	Lista* p = list;
while (p != NULL) {
Lista* t = p->prox; /* guarda referência p/ próx. elemento */
free(p); /* libera a memória apontada por p */
p = t; /* faz p apontar para o próximo */
}
}
Lista* questao7(Lista lista){
Lista* l=null;
int maior,menor,soma,media,cont;

    for(l=lista;l!=null;l=l->prox){
    soma +=l->info;
    cont++;
    if(l->info < menor)
    menor = l->info;
    if(l->info > maior)
    maior =l->info;
    }
    media = soma/cont;
}
