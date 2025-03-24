//cria uma nova pilha, informando o número máximo de elementos que ela pode comportar
void criaPilha(Pilha* p, int capacidade){
    if(!p)
        return;
    p->capacidade = capacidade;
    p->elementos = 0;
    p->topo = NULL;
}

//esvazia/destrói a pilha
void destroiPilha(Pilha* p){
    if(!p)
        return;
    while(p->topo){
        nodo* aux = p->topo;
        p->topo = p->topo->ant;
        free(aux);
    }
    free(p);
}

//insere um novo elemento no topo da pilha
void insere(Pilha* p, int elmt){
    if(!p)
        return;
    nodo* n = malloc(sizeof(nodo));
    n->dado = elmt;
    n->ant = p->topo;
    p->topo = n;
}

//retira o elemento do topo da pilha
nodo* retira(Pilha* p){
    if(!p)
        return;
    
}

//devolve o elemento do topo da pilha sem removê-lo
nodo* topo(Pilha* p);

//devolve o número de elementos na pilha
int tamanho(Pilha* p);