#include"Lista.h"
int menu(void){ 
	int opt;
	
	printf("Escolha a opcao\n");
	printf("0. Sair\n");
	printf("1. Exibir lista\n");
	printf("2. Adicionar node no inicio\n");
	printf("3. Zerar lista\n");
        printf("4. Exibir tamanho da lista\n");
	printf("-> "); scanf("%d", &opt);
	
	return opt;
}

void opcao(node *LISTA, int op){

	switch(op){
		case 0:
			libera(LISTA);
			break;
			
		case 1:
			exibe(LISTA);
			break;
		
		case 2:
			insereInicio(LISTA);
			break;

		case 3:

		      libera(LISTA);
		       break;

		case 4:
			exibeTamanho(LISTA);
			break;
		default:
			printf("Comando invalido\n\n");
	}
}


int main(void){

	node * LISTA = criarLista();
	int opt;
	
	do{
		opt=menu();
		opcao(LISTA,opt);
	}while(opt);

	free(LISTA);
	return 0;
}






