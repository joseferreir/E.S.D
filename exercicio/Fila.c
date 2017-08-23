#include "Fila.h"
#include"Lista.h"
#include "Lista.h"

struct fila {
node* ini;
node* fim;
};
Fila* cria(void){
    Fila* f = (Fila*) malloc(sizeof(Fila));
    f->ini = f->fim = NULL;
    return f;
}

void insere(Fila* f, int v){
    insereFim(f->fim,v)
    if (f->ini==NULL) /* fila antes vazia? */
    f->ini = f->fim;
}
float retira (Fila* f){
int v;
    if (vazia(f)) {
        printf("Fila vazia.\n");
        exit(1);
/* aborta programa */
}
    v = f->ini->num;
    f->ini =retiraInicio(f->ini)
    if (f->ini == NULL)
/* fila ficou vazia? */
    f->fim = NULL;
    return v;
}
void libera (Fila* f) {
    node* q = f->ini;
    while (q!=NULL) {
        node* t = q->prox;
        free(q);
        q = t;
}
free(f);
}

/* função auxiliar: insere no fim */
node *ins_fim (node* fim, float v)
{
node* p = (node*) malloc(sizeof(node));
p->info = v;
p->prox = NULL;
if (fim != NULL) /* verifica se lista não estava vazia */
fim->prox = p;
return p;
}
/* função auxiliar: retira do início */
node* ret_ini (node* ini)
{
node* p = ini->prox;
free(ini);
return p;
}
int vazia (Fila* f)
{
return (f->ini==NULL);
}
/* imprime: versão com lista */
void imprime (Fila* f){
node* q;
for (q=f->ini; q!=NULL; q=q->prox)
printf("%f\n",q->num);
}
