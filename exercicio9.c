#include <stdio.h>
#include "bibliotecaMatrix.h"
int soma(int mat[][100], int tam){
	int i, j, soma=0;
	for(i=0;i<tam;i++)
		for(j=0;j<tam;j++)
			soma+=mat[i][j];
	return soma;
}
int main(){
	int n1, n2, res, mat[100][100], mat2[100][100];
	printf("Digite a ordem da matriz 1 e 2: ");
	scanf("%d%d", &n1, &n2);
	if(n1 == n2){
		geraMatrix(mat, n1, n1);
		geraMatrix(mat2, n2, n2);
		res = soma(mat, n1);
		res = res + soma(mat2, n2);
		printf("A soma das matrizes: %d\n",res);
		printMatrix(mat, n1, n1);
		printf("\n______________________\n");
		printMatrix(mat2, n1, n1);
	}	
	else
		printf("Matrizes de ordem diferentes!");
	return 0;
}
