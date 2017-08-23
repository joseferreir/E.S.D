#include"Lista.h"
#include"Fila.h"
int main(void){

Fila *f = cria();
insereFila(f,1);
insereFila(f,2);
insereFila(f,3);
imprime(f);


//	node *LISTA = inicia();
//	if(!LISTA){
//		printf("Sem memoria disponivel!\n");
//		exit(1);
//	}else{
//	inicia(LISTA);
//	int opt;
//
//	do{
//		opt=menu();
//		opcao(LISTA,opt);
//	}while(opt);
//
//	free(LISTA);
//	return 0;
//	}
}

