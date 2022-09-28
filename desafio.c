#include <stdio.h>
#include <stdio.h>
#include "bibliotecaMatrix.h"
int main(){
	int m[100][100], ordem, x1, x2, x3, res;
	printf("Digite a ordem:");
	scanf("%d",&ordem);
	if(ordem == 2){
		leiaMatrix(m,ordem, ordem);
		x1 = m[0][0]*m[1][1];
		x2 = m[0][1]*m[1][0];
		res = x1 - x2;
		printf("Resultado: %d",res);
	}
	else if(ordem == 3){
		leiaMatrix(m,ordem, ordem);
		x1 = m[0][0]*m[1][1]*m[2][2];
		x2 = m[1][0]*m[2][1]*m[0][2];
		x3 = m[2][0]*m[0][1]*m[1][2];
		res = x1 + x2 + x3;
		x1 = m[2][0]*m[1][1]*m[0][2];
		x2 = m[0][0]*m[2][1]*m[1][2];
		x3 = m[2][2]*m[0][1]*m[1][0];
		res = res-(x1+x2+x3);
		
		printf("Resultado: %d",res);
	}
	else
		printf("Ordem somente 2 ou 3");
			
}
