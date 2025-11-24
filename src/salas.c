#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/salas.h"

Sala* criarSala(const char *nome) {
    Sala *nova = (Sala*) malloc(sizeof(Sala));
    if (!nova) {
        printf("Erro ao alocar memória!\n");
        exit(1);
    }
    strcpy(nova->nome, nome);
    nova->esquerda = NULL;
    nova->direita = NULL;
    return nova;
}

void explorarSalas(Sala *atual) {
    char opcao;

    while (atual != NULL) {
        printf("\nVocê está na sala: %s\n", atual->nome);

        if (atual->esquerda == NULL && atual->direita == NULL) {
            printf("Você chegou ao fim do caminho! Esta sala não possui saídas.\n");
            return;
        }

        printf("Escolha um caminho:\n");
        if (atual->esquerda != NULL)
            printf(" (e) Ir para a sala à ESQUERDA\n");
        if (atual->direita != NULL)
            printf(" (d) Ir para a sala à DIREITA\n");
        printf(" (s) Sair da exploração\n> ");

        scanf(" %c", &opcao);

        if (opcao == 'e' && atual->esquerda != NULL) {
            atual = atual->esquerda;
        }
        else if (opcao == 'd' && atual->direita != NULL) {
            atual = atual->direita;
        }
        else if (opcao == 's') {
            printf("Você saiu da exploração.\n");
            return;
        }
        else {
            printf("Opção inválida!\n");
        }
    }
}
