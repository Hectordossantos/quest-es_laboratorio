#include <stdio.h>
#include <stdlib.h>

void limpamemoria(float ** matriz, int linhas){
	for(int i = 0; i < linhas; i++){
		free(matriz[i]);
	}
	free(matriz);
}


float ** criandomatrizfloat(int linhas, int colunas){

float **matriz= (float **)malloc(linhas*sizeof(float*));
int linha;
for(linha=0;  linha<linhas; linha++)){
    matriz[linha] = (float*) malloc(colunas*sizeof(float));
}
return matriz;
}

int main(){
int linhas =2;
int colunas =2 ;
float **matriz = criandomatrizfloat(linhas, colunas);

int i,j;
printf("digite os valores para a matriz: \n");
for ( i = 0; i < linhas; i++)
{
    for ( j = 0; j < colunas; j++)
    {
      matriz[i][j]= (i * 3 + j);
    }
    
}
for ( i = 0; i < linhas; i++)
{
    for ( j = 0; j < colunas; j++)
    {
      printf("%2.f", matriz[i][j]);
    }
    
}
limpamemoria(matriz, linhas);
    return 0;
}