#include <stdio.h>

typedef struct _pilha {
    char c;
    struct pilha *ant;
} pilha;

void add(pilha *p, char c);
char pop(pilha *p);
char *leia_expressao();
pilha *empilhar_expressao(char *expressao);
pilha *constroi_expressao_reversa(pilha *p);
int calcula_expressao(pilha *p_reverso);

int main() {
    pilha *p, *p_reverso;
    int menu, resultado;
    char *expressao, *expressao_reversa;

    do {
        printf("\nEscolha uma opção:\n");
        printf("1- Calcular expressão\n");
        printf("2- Sair\n");
        printf("Opção: ");
        scanf("%d", &menu);

        switch(menu) {
            case 1:
                expressao = leia_expressao();
                p = empilhar_expressao(expressao);
                p_reverso = constroi_expressao_reversa(p);
                resultado = calcula_expressao(p_reverso);
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

void add(pilha *p, char c) {

}

/* Retira e retorna o elemento do topo da pilha */
/*
    p => '(' <- '2' <- '+' <- '3' <- ')'
    
    char topo = pop(p);
    
    topo => ')'
    p => '(' <- '2' <- '+' <- '3'           
*/
char pop(pilha *p) {
    return '1';
}

char *leia_expressao() {
    return NULL;
}

pilha *empilhar_expressao(char *expressao) {
    return NULL;
}

pilha *constroi_expressao_reversa(pilha *p_reverso) {
    return NULL;
}

int calcula_expressao(pilha *p) {
    return 0;
}