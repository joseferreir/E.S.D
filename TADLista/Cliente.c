/*Programa Cliente para testar os TADs criados
na Disciplina Estrutura de Dados*/

/*Bibliotecas da Linguagem utilizadas pelo cliente*/
#include <stdio.h>
#include <stdlib.h>
/*Bibliotecas da Linguagem utilizadas pelo cliente*/
#include "Lista.h"


int main(int argc, char *argv[]) {

	Lista* l = lista_cria();
	Pilha* p = pilha_cria();

    l=  lista_insere_inicio(l,20);
    l=  lista_insere_inicio(l,30);
    l=	lista_insere_inicio(l,40);
    l=	lista_insere_inicio(l,50);

    lista_imprime(l);

    lista_remove(l,30);

    lista_imprime(l);

  return 0;
 }




