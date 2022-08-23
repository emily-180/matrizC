#include <stdio.h>
#include "bibliotecaMatriz.h"

int main(){
	int mat[100][100], lin, cols, cont=0, maior;
	int i, j;
	printf("Quantidade de linhas e colunas da matriz: ");
	scanf("%d%d", &lin, &cols);
	carregaMatrix(mat, lin, cols);
	printf("*** Matriz ***\n");
	printMatrix(mat, lin, cols);
	maior = mat[0][0];
	for(i=0;i<lin;i++)
		for(j=0;j<cols;j++)
			if(mat[i][j]>maior)
				maior = mat[i][j];
	printf("Maior valor: %d ", maior);
	return 0;	
}
