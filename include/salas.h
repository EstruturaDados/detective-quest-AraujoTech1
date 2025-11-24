#ifndef SALAS_H
#define SALAS_H

typedef struct Sala {
    char nome[50];
    struct Sala *esquerda;
    struct Sala *direita;
} Sala;

Sala* criarSala(const char *nome);
void explorarSalas(Sala *atual);

#endif
