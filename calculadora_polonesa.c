#include <stdio.h>

typedef struct _pilha {
    char c;
    struct pilha *ant;
} pilha;

/* Adiciona um elemento ao topo da pilha */
/* 
    p => '(' <- '2' <- '+' <- '3'
    
    add(p <- ')');
    
    p => '(' <- '2' <- '+' <- '3' <- ')'    
*/
void add(pilha p, char c) {

}

/* Retira e retorna o elemento do topo da pilha */
/*
    p => '(' <- '2' <- '+' <- '3' <- ')'
    
    char topo = pop(p);
    
    topo => ')'
    p => '(' <- '2' <- '+' <- '3'           
*/
char pop(pilha p) {
    return '1';
}

int main() {

    return 0;
}