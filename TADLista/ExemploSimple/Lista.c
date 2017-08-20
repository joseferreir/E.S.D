#include"Lista.h"
struct Node{
	int num;
	int tamanho;
	struct Node *prox;
}; 

int vazia(node *LISTA)
{
	if(LISTA->prox == NULL)
		return 1;
	else
		return 0;
}

void insereInicio(node *LISTA){ 
	node *novo = aloca();
	
	node *oldHead = LISTA->prox;
	
	LISTA->prox = novo;
	novo->prox = oldHead;
	LISTA->tamanho++;
}
void inserePorPosicao(node *LISTA){
	int pos,
		count;
	printf("Em que posicao, [de 1 ate %d] voce deseja inserir: ", LISTA->tamanho);
	scanf("%d", &pos);
	
	if(pos>0 && pos <= LISTA->tamanho){
		if(pos==1)
			insereInicio(LISTA);
		else{
			node *atual = LISTA->prox,
				 *anterior=LISTA; 
			
	node *novo = aloca();
	if(!novo){
		printf("Sem memoria disponivel!\n");
		exit(1);
	}
				 
			for(count=1 ; count < pos ; count++){
					anterior=atual;
					atual=atual->prox;
			}
			anterior->prox=novo;
			novo->prox = atual;
			LISTA->tamanho++;
		}
			
	}else
		printf("Elemento invalido\n\n");		
}


void exibe(node *LISTA){

printf("------------------------------\n\n");

	if(vazia(LISTA)){
		printf("Lista vazia!\n\n");
		return ;
	}
	
	node *tmp;
	tmp = LISTA->prox;
	
	while( tmp != NULL){
		printf("%5d", tmp->num);
		tmp = tmp->prox;
	}
	printf("------------------------------\n\n");
}

 void exibeTamanho(node *LISTA){
                 if(vazia(LISTA)){
		printf("Lista vazia!\n\n");
		return ;
	}
	
		printf("O tamanho atual: %5d",LISTA->tamanho);

	printf("\n\n");
}

void libera(node *LISTA)
{
	if(!vazia(LISTA)){
		node *proxNode,
			  *atual;
		
		atual = LISTA->prox;
		while(atual != NULL){
			proxNode = atual->prox;
			free(atual);
			atual = proxNode;
		}
	}
}
node* aloca(){
node *novo=(node *) malloc(sizeof(node));
	if(!novo){
		printf("Sem memoria disponivel!\n");
		exit(1);
	}
     printf("Novo elemento: "); scanf("%d", &novo->num);

   return novo;
}


