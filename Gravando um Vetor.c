#include <stdio.h>
#include <stdlib.h>


void gravarStruct();
void gravarVetor();
void lerVetor();

int main (){

//lerVetor();
//gravarVetor();

gravarStruct();

return 0;
}

void gravarVetor()
    {
        int nota[5] = {6,8,10,7,10};
        FILE *arq;
        int result;
        arq = fopen("C:\\aulanooova\\ArqTeste.dat", "wb");
        if (arq == NULL){

            fprintf(stderr, "Problema na criacao do arquivo\n");
            return 1;
        }

        result = fwrite(&nota, sizeof(int), 5, arq);
        fclose(arq);
        printf("Numero de bytes gravados: %d", result);
    return 0;
}


    void lerVetor()
    {
        int valor[5];
        FILE *arq;
        int result;
        int x;
        arq = fopen("ArqTeste.dat", "rb");
        if (arq == NULL){

            fprintf(stderr, "Problema na criacao do arquivo\n");
            return 1;
        }

        result = fread(&valor, sizeof(int), 5, arq);
        fclose(arq);

        printf("Numero de elementos lidos: %d\n", result);
        for(x=0;x<5;x++)
            printf("\n Valor: %d", valor[x]);
    return 0;
}


    typedef struct Aluno{
        char nome[101];
        float notaB1;
        float notaB2;
    } Aluno;

    void gravarStruct()
    {
        Aluno aluno;
        strcpy(aluno.nome, "Romero Britto");
        aluno.notaB1 = 6.7;
        aluno.notaB2 = 10;

        FILE *arq;
        int result;
        arq = fopen("ArqTeste.dat", "wb");
        if (arq == NULL){

            fprintf(stderr, "Problema na criacao do arquivo\n");
            return 1;
        }

        result = fwrite(&aluno, sizeof(aluno), 1, arq);
        fclose(arq);

        printf("Numero de bytes gravados: %d\n", result);

    return 0;
}

