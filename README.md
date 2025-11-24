# Detective Quest – Nível Novato  

## Descrição 
Este projeto representa o backend do nível **Novato** do jogo educacional *Detective Quest*.  
O sistema foi construído em **linguagem C** e implementa uma **árvore binária fixa**, que funciona como o mapa da mansão explorada pelo jogador.  
Cada sala é um nó da árvore e o jogador pode navegar para a esquerda ou direita até encontrar um caminho sem saída.

O projeto foi desenvolvido exclusivamente para fins acadêmicos na disciplina de Estruturas de Dados.

---

## Funcionalidades do Projeto  
- Criação de uma árvore binária representando os cômodos da mansão.  
- Navegação interativa entre as salas através do terminal.  
- Exibição da sala atual a cada movimento.  
- Finalização do caminho quando o jogador chega a um nó-folha.  
- Opção de sair da exploração a qualquer momento.

---

## Testes de Software  
### ✔️ Teste de Depuração  
- Verificação de alocação correta de memória para cada sala.  
- Testes realizados para garantir que nenhum ponteiro esteja nulo indevidamente.  

### ✔️ Teste de Funcionamento  
- Teste manual de navegação pelos caminhos:  
  - Caminho esquerdo completo.  
  - Caminho direito completo.  
  - Misturação entre esquerda e direita.  
  - Teste da função de saída.  

---

## Tecnologias e Linguagens  
- Linguagem C  
- Compilador GCC  
- Estruturas de Dados (árvore binária)

---

## Bibliotecas  
- `<stdio.h>`  
- `<stdlib.h>`  
- `<string.h>`  

---

## Pré-requisitos e Instalações  
- GCC ou outro compilador compatível com C  
- Sistema operacional Windows, Linux ou Mac OS  
- Terminal ou CMD

---

## Instruções de Uso
- Compilação manual:
gcc src/main.c src/salas.c -Iinclude -o detective

- Execução:
./detective

- Jogabilidade:

e → ir para a sala à esquerda

d → ir para a sala à direita

s → encerrar exploração

---

© 2024 — Desenvolvido para fins educacionais | Estácio de Sá.

