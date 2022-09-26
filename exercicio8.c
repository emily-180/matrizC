#include <stdio.h>
#include "bibliotecaMatriz.h"
int temBits(int mat[][100], int lin, int cols){
	int i, j, ehFalso=1;
	for(i=0;i<lin;i++)
		for(j=0;j<cols;j++)
			if(mat[i][j] < 0 && mat[i][j] > 1)
				ehFalso=0;
	return ehFalso;
}
int main(){
	int lin, cols, i, j, n, res, mat[100][100];
	printf("Digite a quantidade de linhas e colunas: ");
	scanf("%d%d", &lin, &cols);
	for(i=0;i<lin;i++)
		for(j=0;j<cols;j++){
			scanf("%d", &n);
			mat[i][j]=n;	
		}
	res=temBits(mat, lin, cols);
	if(res == 0)
		printf("Nao e funcao bits!\n");
	else
		printf("Eh uma funcao bits!\n");
	printMatrix(mat, lin, cols);
	return 0;			
}
