#include <stdio.h>
#include "bibliotecaMatriz.h"

int main(){
	int mat[100][100], lin, cols, cont=0, busca;
	int i, j;
	printf("Quantidade de linhas e colunas da matriz: ");
	scanf("%d%d", &lin, &cols);
	if(lin <= 100 && cols <= 100){
		carregaMatrix(mat, lin, cols);
		printf("*** Matriz ***\n");
		printMatrix(mat, lin, cols);
		for(i=0;i<lin;i++)
			for(j=0;j<cols;j++)
				if(i == j+1)
					printf("%d | ",mat[i][j]);
	}		
	else	
		printf("Limite de 100 linha e coluna!");
	return 0;	
}
