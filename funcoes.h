#ifndef FUNC_H
#define FUNC_H
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct{
	int num_Vertices;
	int matrizAdj[MAX][MAX];
}Grafo;

Grafo*criarGrafo(int vertices);
void adicionarAresta(Grafo* g, int v1, int v2);
void imprimirGrafo(Grafo* g);



Grafo*criarGrafo(int vertices){
	Grafo* g=(Grafo*) malloc(sizeof(Grafo));
	if(g==NULL){
		printf("Erro de Memoria \n");
		
		exit(1);
	}
	g->num_Vertices=vertices;
	for(int i = 0; i<vertices; i++){
		for(int j = 0; j< vertices; j++){
			g->matrizAdj[i][j]=0;
		}
	}
	return g;
	
}

void adicionarAresta(Grafo* g, int v1, int v2){
	if(v1>=g->num_Vertices || v2>= g->num_Vertices){
		printf("Vertice invalido\n");
		return;
	}
	
	g->matrizAdj[v1][v2]=1;
	g->matrizAdj[v2][v1]=1;
}
void imprimirGrafo(Grafo* g){
	printf("\n Matriz de Adjacencia: \n");
	for(int i=0; i< g->num_Vertices;i++){
		for(int j=0; j< g->num_Vertices; j++){
			printf("%d", g->matrizAdj[i][j]);
		}
		printf("\n");
	}
}
#endif 

