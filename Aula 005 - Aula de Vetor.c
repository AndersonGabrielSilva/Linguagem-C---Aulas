#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Aula de Vetor

// Exemplo do Professor
/*
int main()
{
    int quantpessoas = 5;
    int idade[quantpessoas];
    int x;
    float peso [quantpessoas];

     printf ("Entre com a quantidade de pessoas : ");
     scanf ("%d", &quantpessoas);

    for (x=1;x<quantpessoas;x++)
    {
        printf ("Entre com a idade %d : ", x);
        scanf ("%d", &idade [x]);
        printf ("Entre com o peso %d : ", x);
        scanf ("%f", &peso[x]);

    }
    for (x=1;x<=quantpessoas;x++)
    {
        printf ("\nIdade %d : %d", x,idade[x]);
        printf ("\nE o peso do: %.2f",peso[x]);
    }

    return 0;
}*/
/*
int main()
{
    int quantpessoas = 5;
    int idade[quantpessoas];
    int x;

    for (x=0;x<quantpessoas;x++)
    {
        printf ("Entre com a idade %d : ", x);
        scanf ("%d", &idade [x]);
    }
    for (x=0;x<quantpessoas;x++)
    {
        printf ("\nIdade %d : %d", x,idade[x]);

    }

    return 0;
}
*/

//
/*
void main ()
{
    char nome[201];
    char sobrenome[201];
    printf ("Entre com seu nome: ");
    scanf  ("%200s %200s", &nome, &sobrenome);
    printf ("\nOla %s %s\n", nome,sobrenome);
return 0;
}
*/

/*
void main ()
{
    char nome[201];
    printf ("Entre com seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    // o sizeof retorna o valor da variavel // sizeof = tamanho de
    // O stdin serve para informar que a fonte de entrada é o teclado
    printf ("\nOla %s \n", nome);
return 0;
}
*/
/*
void main ()
{
    char nome[201];
    printf ("Entre com seu nome:");
    fgets(nome, sizeof(nome), stdin);
    // o sizeof retorna o valor da variavel // sizeof = tamanho de
    // O stdin serve para informar que a fonte de entrada é o teclado
    printf ("\nOla %s \n", nome);

    int x=0;

    while (nome[x] != '\0'){
    x++;
    }
    printf ("\nQuantidade de caracteres : %d \n", --x);
return 0;
}
*/

/*
int main ()
{
    char nome [81];
    int qntcaracteres;

    printf ("\n Entre com seu nome: ");
    //scanf ("%80s", nome);
        fgets(nome, sizeof(nome), stdin);

    qntcaracteres = strlen(nome);

    printf ("\nOla seu nome %s possui %d caracteres", nome, qntcaracteres);

return 0;
}
*/
/*
int main ()
{
    char nome [81];
    char destino [81];
    printf ("\nEntre com o seu nome: ");
    scanf  ("%80s", nome );
    //fgets(nome, sinzeof(nome), stdin);

        strcpy(destino,nome);
    printf ("\nNome: %s \tDestino: %s", nome,destino);
return 0;
}
*/
//#include <stdio.h>
//#include <string.h>


void main()
{
    char senha[201];
    char chave[201];
    int iguais=1;
    int x=0;

    strcpy(chave, "secreto");
    printf("Entre com a senha: ");
    fgets(senha, sizeof(senha), stdin);

        for(x=0; x<strlen(chave); x++)
        {
            if(senha[x]!=chave[x])
            {
                iguais=0;
            }
        }
           if(iguais==1)
        {
            printf("Acesso permitido\n");
        }else
        {
            printf("Acesso negado\n");
        }
return 0;
}
