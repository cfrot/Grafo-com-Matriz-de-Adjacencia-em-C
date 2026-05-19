# Implementação de Grafo com Matriz de Adjacência em C

## Introdução

Este projeto apresenta uma implementação básica de grafos utilizando matriz de adjacência na linguagem C.

O objetivo principal do projeto é demonstrar como representar conexões entre vértices utilizando estruturas de dados, além de praticar conceitos fundamentais de grafos, manipulação de memória e modularização de código em C.

---

# O que é um grafo?

Um grafo é uma estrutura utilizada para representar relacionamentos entre elementos.

Ele é composto por:

- **Vértices (nós)** → representam pontos
- **Arestas** → representam conexões entre os vértices

Exemplo:

```txt
0 ----- 1
 \     /
   \ /
    2
```

Nesse exemplo:
- `0`, `1` e `2` são vértices
- As linhas representam as conexões entre eles

---

# Objetivo do projeto

O projeto tem como objetivo:

✅ Criar um grafo dinamicamente  
✅ Adicionar conexões entre vértices  
✅ Representar o grafo utilizando matriz de adjacência  
✅ Exibir visualmente as conexões do grafo  

---

# O que é uma matriz de adjacência?

A matriz de adjacência é uma forma de representar grafos utilizando uma matriz bidimensional.

Cada posição da matriz indica se existe conexão entre dois vértices.

---

## Exemplo

### Grafo

```txt
0 ----- 1
 \     
  \    
    2
```

---

### Matriz correspondente

|   | 0 | 1 | 2 |
|---|---|---|---|
| 0 | 0 | 1 | 1 |
| 1 | 1 | 0 | 0 |
| 2 | 1 | 0 | 0 |

---

## Como interpretar

- `1` → existe conexão
- `0` → não existe conexão

Exemplo:

```txt
matriz[0][1] = 1
```

Significa que existe uma aresta entre os vértices `0` e `1`.

---

# Estrutura do projeto

O projeto foi dividido em funções responsáveis por manipular o grafo.

---

# Estrutura utilizada

```c
typedef struct{
	int num_Vertices;
	int matrizAdj[MAX][MAX];
} Grafo;
```

---

## Explicação

| Campo | Função |
|---|---|
| `num_Vertices` | Armazena a quantidade de vértices |
| `matrizAdj` | Armazena as conexões do grafo |

---

# Funções implementadas

---

# Criar grafo

```c
Grafo* criarGrafo(int vertices)
```

Responsável por:

- Alocar memória dinamicamente
- Inicializar a matriz com zeros
- Definir a quantidade de vértices

---

## Funcionamento

O algoritmo percorre toda a matriz:

```c
for(int i = 0; i < vertices; i++){
	for(int j = 0; j < vertices; j++){
		g->matrizAdj[i][j] = 0;
	}
}
```

Isso garante que inicialmente nenhum vértice esteja conectado.

---

# Adicionar aresta

```c
void adicionarAresta(Grafo* g, int v1, int v2)
```

Responsável por criar conexões entre vértices.

---

## Funcionamento

```c
g->matrizAdj[v1][v2] = 1;
g->matrizAdj[v2][v1] = 1;
```

Como o grafo é não direcionado:

```txt
0 → 1
1 → 0
```

As duas posições recebem valor `1`.

---

# Imprimir grafo

```c
void imprimirGrafo(Grafo* g)
```

Responsável por exibir a matriz de adjacência na tela.

---

# Exemplo de execução

## Entrada

```txt
Numero de Vertices: 3
Numero de arestas: 2

Aresta 1:
0 1

Aresta 2:
0 2
```

---

## Saída

```txt
Matriz de Adjacencia:

011
100
100
```

---

# Fluxo do programa

O programa executa as seguintes etapas:

1. Lê a quantidade de vértices
2. Cria o grafo dinamicamente
3. Lê as arestas informadas pelo usuário
4. Adiciona as conexões na matriz
5. Exibe a matriz de adjacência
6. Libera a memória utilizada

---

# Conceitos utilizados

Durante o desenvolvimento deste projeto foram utilizados conceitos importantes como:

- Grafos
- Matriz de adjacência
- Estruturas (`struct`)
- Ponteiros
- Alocação dinâmica de memória
- Modularização em C
- Manipulação de matrizes
- Funções
- Condicionais
- Laços de repetição

---

# Validação de vértices

O projeto realiza verificação para impedir acesso a vértices inválidos.

```c
if(v1 >= g->num_Vertices || v2 >= g->num_Vertices)
```

Isso evita erros de acesso à memória.

---

# Complexidade

## Inserção de arestas

```txt
O(1)
```

A inserção ocorre diretamente na matriz.

---

## Impressão da matriz

```txt
O(V²)
```

Onde:

- `V` = quantidade de vértices

---

# ✅ Vantagens da matriz de adjacência

- Implementação simples
- Acesso rápido às conexões
- Fácil visualização do grafo

---

# ❌ Desvantagens

- Alto consumo de memória em grafos grandes
- Pouco eficiente para grafos esparsos

---

# Aplicações reais

Grafos podem ser utilizados em:

- 🌐 Redes sociais
- 📡 Redes de computadores
- 🛰️ Sistemas de GPS
- 🗺️ Mapas e rotas
- 🎮 Desenvolvimento de jogos
- 🚦 Sistemas de trânsito
- 🔗 Sistemas de recomendação

---

# Tecnologias utilizadas

- Linguagem C
- Estruturas de Dados
- Algoritmos

---

# Como executar o projeto

## 1️⃣ Compilar o projeto

```bash
gcc main.c -o grafo
```

---

## 2️⃣ Executar

### Linux/macOS

```bash
./grafo
```

### Windows

```bash
grafo.exe
```

---

# Estrutura do projeto

```txt
projeto/
│
├── main.c
├── funcoes.h
```

---

# Objetivo acadêmico

Este projeto foi desenvolvido com fins acadêmicos para estudo de grafos, matrizes de adjacência, estruturas de dados e manipulação de memória na linguagem C.

---

# Autor

Desenvolvido por Daniel Pacheco.
