#include <stdio.h>
#include "../include/salas.h"

int main() {
    Sala *hall = criarSala("Hall de Entrada");
    Sala *biblioteca = criarSala("Biblioteca");
    Sala *salaJantar = criarSala("Sala de Jantar");
    Sala *escritorio = criarSala("Escritório");
    Sala *cozinha = criarSala("Cozinha");
    Sala *porao = criarSala("Porão");

    hall->esquerda = biblioteca;
    hall->direita = salaJantar;

    biblioteca->esquerda = escritorio;
    biblioteca->direita = cozinha;

    salaJantar->direita = porao;

    printf("=== Detective Quest – Mansão Misteriosa ===\n");
    printf("Você começará no Hall de Entrada.\n");

    explorarSalas(hall);

    return 0;
}
