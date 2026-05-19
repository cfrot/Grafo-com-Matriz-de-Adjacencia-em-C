
#include "func/funcoes.h" // Certifique-se que o caminho da pasta está correto
#include <stdio.h>
#include <stdlib.h>

int main() {
    int vertices, arestas;
    int v1, v2;

    printf("Numero de Vertices: ");
    if (scanf("%d", &vertices) != 1) return 1;

    // Cria o grafo usando a função do seu cabeçalho
    Grafo* g = criarGrafo(vertices);

    printf("Numero de arestas: ");
    // CORREÇÃO: era "d%", mudamos para "%d"
    if (scanf("%d", &arestas) != 1) return 1;

    for (int i = 0; i < arestas; i++) {
        printf("Aresta %d (v1 v2): ", i + 1);
        // Lê os dois vértices que formam a conexão
        if (scanf("%d %d", &v1, &v2) == 2) {
            adicionarAresta(g, v1, v2);
        } else {
            printf("Erro ao ler vertices.\n");
            i--; // Tenta ler esta aresta novamente
        }
    }

    // Exibe o resultado final (Matriz de Adjacência)
    imprimirGrafo(g);

    // Libera a memória alocada para a estrutura do grafo
    free(g);

    return 0;
}


