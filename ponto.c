#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "ponto.h"



Ponto* criar (float x, float y){
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    if (p == NULL){
        printf("Erro ao alocar memoria\n");
        exit(1);
        }
        p->x = x;
        p->y = y;
        return p;
        
    }

    void libera(Ponto *p)
    {
        free(p);
    }



void acessar (Ponto* p, float* x, float* y){
    *x = p->x;
    *y = p->y;
}

void atribuir (Ponto* p, float x, float y){
    p->x = x;
    p->y = y;
}

float distancia (Ponto* p1, Ponto* p2){
    float dx = p2->x - p1->x;
    float dy = p2->y - p1->y;
    return sqrt(dx*dx + dy*dy);
}



