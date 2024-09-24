struct ponto{
    float x;
    float y;
};

typedef struct  ponto Ponto;



Ponto* criar (float x, float y);
void libera (Ponto* p);
void acessar (Ponto* p, float* x, float* y);
void atribuir (Ponto* p, float x, float y);
float distancia (Ponto* p1, Ponto* p2);
