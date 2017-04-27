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

char *leia_expressao() {
    return NULL;
}

int calcula_expressao(char *expressao) {
    return 0;
}

int main() {
    pilha *p = (pilha*) malloc(sizeof(pilha));
    int menu, resultado;
    char *expressao;

    do {
        printf("\nEscolha uma opção:\n");
        printf("1- Calcular expressão\n");
        printf("2- Sair\n");
        printf("Opção: ");
        scanf("%d", &menu);

        switch(menu) {
            case 1:
                expressao = leia_expressao();
                resultado = calcula_expressao(expressao);
                printf("\nO resultado da expressão %s: %d\n", expressao, resultado);
                break;
            case 2:
                menu = -1;
                printf("\nXau :D\n");
                break;
            default:
                printf("\nOpção inválida!\n");
                break;
        }
    } while(menu != -1);
    return 0;
}