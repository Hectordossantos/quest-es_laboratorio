#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
int q_frutas, linha;
printf("digite a quantidade de frutas");
scanf("%i", &q_frutas);

char **frutas = (char **) malloc (q_frutas*sizeof(char*));
if(frutas == NULL){
    printf("erro");
    exit(1);
}
for ( linha = 0; linha < q_frutas; linha++){
    frutas[linha]= (char*) malloc(50*sizeof(char));
}

float *preco= (float*) malloc(q_frutas*sizeof(float*));
if (preco = NULL){
    exit(1);
}
    printf("informe as frutas e seus valores \n");
    for ( linha = 0; linha < q_frutas; linha++)
    {
        scanf("%[^\n]s", frutas[linha]);
        scanf("%f", &preco[linha]);
    }

     for(linha = 0; linha < q_frutas; linha++){
		frutas = (char**) realloc(frutas,20 * sizeof(char));
	}

    for ( linha = 0; linha < q_frutas; linha++)
    {
        free(frutas[linha]);
    }
    
    free(frutas);
    free(preco);

    return 0;
}