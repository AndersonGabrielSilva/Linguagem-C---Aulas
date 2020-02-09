#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno{
        char nome[51];
        char ra [11];
        int idade;
        struct Aluno *proximo;
    }Aluno;


int main()
{
    Aluno *inicio = NULL;
    Aluno *aux;
    int op = 0;

    do{
        printf ("\nMenu\n\n");
        printf ("\n0 - Sair");
        printf ("\n1 - Adicionar");
        printf ("\n2 - Listar");
        printf ("\n\nEntre com a opção desejada: ");
        switch (op){
            case 0:
                    printf ("\nBye...");
                    break;
            case 1:{
                    printf  ("\nAdicionar");
                    Aluno *novo = (Aluno*) malloc(sizeof(Aluno));
                    novo->proximo=NULL;
                    aux = inicio;
                    printf ("\nNome: ");
                    scanf   ("%50s", novo->nome);
                    printf  ("\nRA: ");
                    scanf  ("%10s", novo->ra);
                    printf ("\nIdade: ");
                    scanf   ("%d", &novo->idade);

                    if (inicio == NULL){
                        inicio = novo;
                    }else {
                        while (aux->proximo!=NULL){
                            aux=aux->proximo;
                        }
                        aux->proximo = novo;
                    }}
                    break;
            case 2:{

                printf  ("\nListar");
                aux = inicio;
                printf ("\nNome\tRA\tIdade\t");
                while (aux != NULL) {
                    printf ("\n%s\t%s\t%d", aux->nome, aux->ra, aux->idade);
                    aux = aux->proximo;
                }
                break;
            default:{
            printf  ("\nOpção invalida");
            break;
    }
    }
    }
    }while (op!=0);

    return 0;
}
