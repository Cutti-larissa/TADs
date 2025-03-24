#ifndef PILHA_H
#define PILHA_H

typedef struct nodo{
    int dado;
    nodo* ant;
}nodo;

typedef struct Pilha{
    int capacidade;
    int elementos;
    nodo* topo;
}Pilha;

//cria uma nova pilha, informando o número máximo de elementos que ela pode comportar
void criaPilha(Pilha* p, int capacidade);

//esvazia/destrói a pilha
void destroiPilha(Pilha* p);

//insere um novo elemento no topo da pilha
void insere(Pilha* p, int elmt);

//retira o elemento do topo da pilha
nodo* retira(Pilha* p);

//devolve o elemento do topo da pilha sem removê-lo
nodo* topo(Pilha* p);

//devolve o número de elementos na pilha
int tamanho(Pilha* p);

#endif