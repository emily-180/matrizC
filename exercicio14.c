#include <stdio.h>
#include "bibliotecaMatrix.h"
int main(){
	int m[100][100], lin, cols, i, j;
	int x, y, qtdRaios, caiu=0;
	printf("Qtde de linhas e cols:");
	scanf("%d%d",&lin,&cols);
	for(i=0;i<lin;i++)
		for(j=0;j<cols;j++)
			m[i][j]=0;
	printMatrix(m,lin,cols);		
	printf("Qtde de raios:");
	scanf("%d",&qtdRaios);
	for(i=1;i<=qtdRaios;i++){
		printf("Raio %d:",i);
		scanf("%d%d",&x,&y);
		m[x][y]++;
	}// leitura dos raios
	printMatrix(m,lin,cols);	
	for(i=0;i<lin;i++)
		for(j=0;j<cols;j++)
			if(m[i][j]>0){
				caiu=1;
				break;
			}//fim if				
	if(caiu==0)
		printf("Nao houve queda de raio no mesmo lugar!");
	else
		printf("Houve queda de raio no mesmo lugar!");
	return 0;
}
