#include <stdio.h>
#include "bibliotecaMatriz.h"

int main(){
	int mat[100][100], lin, cols, cont=0, menor;
	int i, j;
	printf("Quantidade de linhas e colunas da matriz: ");
	scanf("%d%d", &lin, &cols);
	carregaMatrix(mat, lin, cols);
	printf("*** Matriz ***\n");
	printMatrix(mat, lin, cols);
	menor = mat[0][0];
	for(i=0;i<lin;i++)
		for(j=0;j<cols;j++)
			if(mat[i][j]<menor)
				menor = mat[i][j];
	printf("Maior valor: %d ", menor);
	return 0;	
}
