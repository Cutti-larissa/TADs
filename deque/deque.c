#include <stdio.h>
#include "deque.h"

void criaDeque(Deque* d, int capacidade){
    if (!d)
        return;
    d->capacidade = capacidade;
    d->elementos = 0;
    d->inicio = NULL;
    d->fim = NULL;
}

//esvazia/destrói o deque
void destroiDeque(Deque* d){
    if (!d)
        return;
    while(d->inicio){
        nodo* aux = d->inicio;
        d->inicio = d->inicio->prox;
        free(aux);
    }
    free(d);
}

//insere um novo elemento no início
void insereInicio(Deque*d, int elmt){
    if (!d)
        return;
    nodo* n = malloc(sizeof(nodo));
    n->dado = elmt;
    n->ant = NULL;
    n->prox = d->inicio;
    if(d->inicio)
        d->inicio->ant = n;
    if(!d->fim)
        d->fim = n;
    d->inicio = n;
    d->elementos++;
}

//insere um novo elemento no fim
void insereFinal(Deque *d, int elmt){
    if(!d)
        return;
    nodo* n = malloc(sizeof(nodo));
    n->dado = elmt;
    n->prox = NULL;
    n->ant = d->fim;
    if(d->fim)
        d->fim->prox = n;
    if(!d->inicio)
        d->inicio = n;
    d->fim = n;
    d->elementos++;
}

//retira o primeiro elemento
nodo* retiraInicio(Deque* d){
    if(!d)
        return NULL;
    if (d->inicio){
        nodo* aux = d->inicio;
        d->inicio = d->inicio->prox;
        if(d->elementos == 1)
            d->fim = NULL;
        d->elementos--;
        return aux;
    }
    return NULL;
}

//retira o último elemento
nodo* retiraFim(Deque* d){
    if(!d)
        return NULL;
    if(d->fim){
        nodo* aux = d->fim;
        d->fim = d->fim->ant;
        if(d->elementos == 1)
            d->inicio = NULL;
        d->elementos--;
        return aux;
    }
    return NULL;
}

//informa qual é o primeiro elemento, mas não o retira
nodo* primeiro(Deque* d){
    if(!d)
        return NULL;
    return d->inicio;
}

//informa qual é o último elemento, mas não o retira
nodo* ultimo(Deque* d){
    if(!d)
        return NULL;
    return d->fim;
}

//informa o número atual de elementos no deque
int tamanho(Deque*d){
    if(!d)
        return -1;
    return d->elementos;
}