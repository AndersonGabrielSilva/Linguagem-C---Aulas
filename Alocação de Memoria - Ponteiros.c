#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    char *nome;
    char*ra;
    int idade ;
}Aluno *proximo;


int main()
{

    Aluno *jose = (Aluno*) malloc(sizeof(Aluno));
    jose->nome = "Jose da Silva";
    jose->ra = "5555555";
    jose->idade = 10;

    Aluno *manuel = (Aluno*) malloc(sizeof(Aluno));
    manuel->nome = "Manuel da Silva";
    manuel->ra = "6666666";
    manuel->idade = 11;

    Aluno *maria = (Aluno*) malloc(sizeof(Aluno));
    maria->nome = "Maria da Silva";
    maria->ra = "777777";
    maria->idade = 12;

    maria->proximo = NULL;
    manuel->proximo = maria;
    jose->proximo = manuel;

    Aluno *tmp;
    tmp = jose;

    do {
    printf("\nNome:%s\tRA:%s\tIdade:%d",jose->nome, jose->ra, jose->idade);
    printf("\nNome:%s\tRA:%s\tIdade:%d",jose->proximo->nome, jose->proximo->ra, jose->proximo->idade);
    printf("\nNome:%s\tRA:%s\tIdade:%d",jose->prixomo->proximo->nome, jose->proximo->proximo->ra, jose->proximo->proximo->idade);
    }while (tmp !=NULL);

    return 0;
}
