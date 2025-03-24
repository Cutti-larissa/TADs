#ifndef DEQUE_H
#define DEQUE_H

typedef struct nodo{
    int dado;
    nodo* prox;
    nodo* ant;
} nodo;

typedef struct Deque{
    int capacidade;
    int elementos;
    nodo* inicio;
    nodo* fim;
} Deque;

//cria um novo deque, informando o número máximo de elementos que ele pode comportar
void criaDeque(Deque* d, int capacidade);

//esvazia/destrói o deque
void destroiDeque(Deque* d);

//insere um novo elemento no início
void insereInicio(Deque*d, int elmt);

//insere um novo elemento no fim
void insereFinal(Deque *d, int elmt);

//retira o primeiro elemento
nodo* retiraInicio(Deque* d);

//retira o último elemento
nodo* retiraFim(Deque* d);

//informa qual é o primeiro elemento, mas não o retira
nodo* primeiro(Deque* d);

//informa qual é o último elemento, mas não o retira
nodo* ultimo(Deque* d);

//informa o número atual de elementos no deque
int tamanho(Deque*d);

#endif