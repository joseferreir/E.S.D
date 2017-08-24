#ifndef FILA_INCLUDED
#define FILA_INCLUDED

typedef struct fila Fila;

Fila* cria(void);

void insereFila(Fila* f, int v);

int retiraFila (Fila* f);

int vazia (Fila* f);

void liberaFila (Fila* f);
void imprime (Fila* f);

#endif // FILA_INCLUDED
