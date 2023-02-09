
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno{
    char nome[50];
    int matricula;
    float IRA;
    }Aluno;
    
void imprime_vetor(int q_alunos, Aluno *a_vetores){
    for(int i = 0 ; i < q_alunos ; i++){
        printf("o nome do aluno(a) é: %s, a matricula dele(a) é: %d, o IRA dele é : %2.f", a_vetores[i].nome, a_vetores[i].matricula, a_vetores[i].IRA);
    }
}

int main(){
    int q_alunos;
    printf("digite a quantidade de alunos");
    scanf("%d", &q_alunos);
    Aluno *a_vetores = (Aluno*) malloc(q_alunos*  sizeof(Aluno));
    if(a_vetores == NULL){
        exit(1);
    }
for(int i = 0 ; i < q_alunos ; i++){
    
    printf("digite o nome dos alunos \n");
    scanf(" %[^\n]s", a_vetores[i].nome);
    
     printf("digite a matricula \n");
    scanf("%i", &a_vetores[i].matricula);
    
     printf("Ira do aluno\n");
    scanf("%f", &a_vetores[i].IRA);
}

imprime_vetor(q_alunos, a_vetores);
free(a_vetores);

return (0);
}


    
    

