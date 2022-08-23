#include <stdio.h>
#include "bibliotecaMatriz.h"

int main(){
	int mat[100][100], lin, cols, cont=0, busca;
	int i, j;
	printf("Quantidade de linhas e colunas da matriz: ");
	scanf("%d%d", &lin, &cols);
	carregaMatrix(mat, lin, cols);
	printf("*** Matriz ***\n");
	printMatrix(mat, lin, cols);
	printf("Valor para verificacao: ");
	scanf("%d", &busca);
	for(i=0;i<lin;i++)
		for(j=0;j<cols;j++)
			if(mat[i][j]>busca)
				cont++;
	printf("Existem %d valores maior que %d!", cont, busca);
	return 0;	
}
