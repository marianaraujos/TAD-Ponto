#include <stdio.h>
#include "ponto.h"

void menu();

int main() {
    Ponto *p1=NULL, *p2=NULL;
    float x, y;
    menu();
    int opcao;
    scanf("%d", &opcao);

    while (opcao != 0) {
        if (opcao == 1) {
            printf("Digite X Y: ");
            scanf("%f %f", &x, &y);
            p1 = criar(x, y);
        } else if (opcao == 2) {
            printf("Digite X Y: ");
            scanf("%f %f", &x, &y);
            p2 = criar(x, y);
        } else if (opcao == 3) {
            if(p1 !=NULL){
                acessar(p1, &x, &y);
                printf("Ponto P1(%f, %f)\n", x,y);
            }else{
                printf("Ponto P1 não foi criado.\n");
            } 
        } else if (opcao == 4) {
            if (p2 != NULL) {
                acessar(p2, &x, &y);
                printf("Ponto P2(%f, %f)\n", x, y);
            } else {
                printf("Ponto P2 não foi criado.\n");
            }
        } else {
            printf("Opção inválida! Tente novamente.\n");
        }

        menu();
        scanf("%d", &opcao);
    }
    if (p1 != NULL) {
        libera(p1);
    }
    if (p2 != NULL) {
        libera(p2);
    }
}

void menu() {
    char opcoes[] =
        " Ponto1 e Ponto2 \n \
        1 - Criar Ponto P1\n \
        2 - Criar Ponto P2\n \
        3 - Mostrar Ponto P1\n \
        4 - Mostrar Ponto P2\n \
        0 - Sair\n \
        >>> ";

    printf("%s", opcoes);
}