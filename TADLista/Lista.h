/* TAD: Lista */
/* Tipo exportado */
typedef struct lista Lista;
/* Fun��es exportadas */


/* Fun��o cria - Aloca e retorna uma Lista */
Lista* lista_cria(void);

/* Fun��o insere - Insere um Novo Elemento ordenado na Lista */
Lista* lista_insere_inicio(Lista* list, int val);


/* Fun��o busca- busca um elemento na lista */
Lista* busca(Lista* lst, int v);

/* Fun��o acessa - Retorna os valores das coordenadas de um ponto */
int lista_vazia(Lista* list);

/* Fun��o Remove - Atribui novos valores �s coordenadas de um ponto */
int lista_remove(Lista* list, int val);

int lista_remove_inicio(Lista* list);

/* Fun��o Imprime - Impri */
void lista_imprime(Lista* list);

int lista_libera(Lista* list);
//exercicio
void questao1(Lista* l, int x);
Lista questao7(Lista* l);


