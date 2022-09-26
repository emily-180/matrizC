#include <stdio.h>
#include "bibliotecaMatriz.h"

int main(){
	int n,  j, i, mat[100][100];
	printf("Digite a quantidade de elementos da matrix: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			if(j==0)
				mat[i][j]=1;
			else
				mat[i][j]=0;
	}
	printMatrix(mat, n, n);
	return 0;			
}
