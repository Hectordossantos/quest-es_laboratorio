#include <stdio.h>
#include <stdlib.h>




typedef struct Funcionarios
{
 char nome[50];
 float salario;
 char cargo[50];
}Funcionarios;

int main(void){

int f;


printf("digite o numero de usuarios");
scanf("%d", &f);

Funcionarios *funcionarios = (Funcionarios*) malloc (f * sizeof(Funcionarios));
if (funcionarios == NULL){
    exit(1);
}

for(int i = 0; i < f; i++){
    printf("digite o nome do funcionario \n");
   scanf("%s", funcionarios[i].nome);


    printf("digite o cargo do funcionario \n");
    scanf("%s", funcionarios[i].cargo);
    
    printf("digite o salario do funcionario \n");
    scanf("%f", &funcionarios[i].salario);
    
    printf("o nome é :  %s o salario é: %2.f, o cargo é %s \n ", funcionarios -> nome, funcionarios->salario, funcionarios->cargo);
   fflush(stdin);
   
}
free(funcionarios);
}
