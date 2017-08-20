#include"Lista.h"
int main(void){

	node * LISTA = aloca();
	int opt;
	
	do{
		opt=menu();
		opcao(LISTA,opt);
	}while(opt);

	free(LISTA);
	return 0;
}



int menu(void)
{
	int opt;
	
	printf("Escolha a opcao\n");
	printf("0. Sair\n");
	printf("1. Exibir lista\n");
	printf("2. Adicionar node no inicio\n");
	printf("3. Adicionar node no final\n");
        printf("4. Escolher a posicao para adicionar node\n");
	printf("5. Zerar lista\n");
        printf("6. Exibir tamanho da lista\n");
	printf("Opcao: "); scanf("%d", &opt);
	
	return opt;
}

void opcao(node *LISTA, int op)
{
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
			//insereFim(LISTA);
			break;		
			
		case 4:
			inserePorPosicao(LISTA);
			break;

		case 5:

		      libera(LISTA);
		       break;

		case 6:
			exibeTamanho(LISTA);
			break;
		default:
			printf("Comando invalido\n\n");
	}
}

