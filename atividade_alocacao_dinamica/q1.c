#include <stdio.h>
#include<stdlib.h>



int main(){
int q_pessoas;
char *sexo, *opiniao ;
printf("digite a quantidade de pessoas que farão a pesquisa");
scanf("%d", &q_pessoas);

sexo = (char*) malloc(q_pessoas * sizeof(char));
if (sexo == NULL)
{
    printf("erro");
    exit (1);
}
opiniao= (char*) malloc(q_pessoas * sizeof(char));
if (sexo == NULL){
    printf("erro");
    exit (1);
}
int i, contf, contm;
for ( i = 0; i < q_pessoas; i++)
{
    printf("digite seu sexo (M/F) e digite sua opinião (G/NG)");
    scanf("%s%s", &sexo, &opiniao);
     if (sexo == 'M' && opiniao == 'G');
        {
      contf++;
        } else if (sexo == 'F' && opiniao == 'NG')
        {
           contm++;
        }
        


}

printf("\n number %i", contf);

    return 0;
}

