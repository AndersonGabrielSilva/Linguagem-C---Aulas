#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
// Exercicios

// Exercicios 01
/*
void main()
{
    int numero [5];

    numero[0] = 20;
    numero[1] = 22;
    numero[2] = 25;
    numero[3] = 26;
    numero[4] = 30;

        int x;

            for (x=0;x<5;x++)
            {
                printf ("Numeros : %d\n", numero[x]);

            }
return 0;
}
*/
//Exercicios 1 - b
/*
#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int qntpessoas =5 ;
    int numero [qntpessoas];

    int x;
        for (x=0;x<qntpessoas;x++)
        {
            printf ("Escreva o numero há ser armazenado, Numero %d\n",x);
            scanf ("%d", &numero[x]);
        }
            for (x=0;x<qntpessoas;x++) {
            printf ("\nSeus numeros %d: %d ",x,numero[x]);
            }

return 0;
}
*/

// Exercicio 1 - c
/*
#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int qntpessoas =10 ;
    int numero [qntpessoas];

    int x;
        for (x=0;x<qntpessoas;x++)
        {
            printf ("Escreva o numero há ser armazenado, Numero %d\n",x);
            scanf ("%d", &numero[x]);
        }
            for (x=0;x<qntpessoas;x++) {
            printf ("\nSeus numeros %d: %d ",x,numero[x]);
            }

return 0;
}
*/

/*
void main ()
{
    int qntpessoas;
    int numero [qntpessoas];

    printf ("Informe a quantidade de numeros que deseja armazenar:\n");
    scanf ("%d", &qntpessoas);
    printf  ("\n");
    int x;
        for (x=0;x<qntpessoas;x++)
        {
            printf ("Escreva o numero há ser armazenado, Numero %d\n",x);
            scanf ("%d", &numero[x]);
        }
            for (x=0;x<qntpessoas;x++) {
            printf ("\nSeus numeros %d: %d ",x,numero[x]);
            }

return 0;
}
*/
// Exercicio 1/e
/*
void main ()
{
    char resp;
    int x;
    int qntpessoas=0;
    int numero[qntpessoas];
do{
        resp = 'n';

        printf ("Informe a quantidade de numeros que deseja armazenar: \n");
        scanf  ("%d", &qntpessoas);
            if (qntpessoas<=0)
          {
          printf ("\nNumero %d invalido, digite um numero que seja positivo\n\n", qntpessoas);
          resp = 'r';
          }
}while (resp =='r');

    for (x=0;x<qntpessoas;x++)
    {

        printf ("Escreve o numero há ser armazenado, numero %d\n",x);
        scanf  ("%d", &numero[x]);
    }

        for (x=0;x<qntpessoas;x++)
        {
        printf ("\nSeus numeros %d: %d ",x,numero[x]);
        }
return 0;
}*/
// Exercicio 4
/*
int main ()
{
    int qtddealunos;
    int alunos [qtddealunos];
    int x=0;

    printf ("Informe quantos anos há na sala: ");
    scanf  ("%d", &qtddealunos);

    printf ("\n\nDigite a idade dos alunos: ");

    for (x=1;x<=qtddealunos;x++)
    {
        printf ("\n\nAluno %d: ", x);
        scanf  ("%d", &alunos[x]);
    }

    for (x=1;x<=qtddealunos;x++)
    {
            printf ("%d,\t", alunos[x]);

    }



return 0;
}*/
//EXERCICIOS 5
//*
/*
int main ()
{
    int qtddealunos;
    int alunos [qtddealunos];
    int x=0,soma=0;
    int y;

    printf ("Informe quantos anos há na sala: ");
    scanf  ("%d", &qtddealunos);

    printf ("\n\nDigite a idade dos alunos: ");

    for (y=0;y<qtddealunos;y++)
    {
        printf ("\n\nAluno %d: ", y+1);
        scanf  ("%d", &alunos[y]);
    }


    for (x=0;x<qtddealunos;x++)
    {
        soma = soma+alunos[x];

    }

        printf ("\n A soma das idades é: %d ", soma);


return 0;
}
//
*/
//
////EXERCICIO 6
////
/*
int main ()
{
    int qtddealunos;
    int alunos;
    int x=0,soma=0;

    printf ("Informe quantos anos há na sala: ");
    scanf  ("%d", &qtddealunos);

    printf ("\n\nDigite a idade dos alunos: ");

    for (x=1;x<=qtddealunos;x++)
    {
        printf ("\n\nAluno %d: ", x);
        scanf  ("%d", &alunos);

        soma = soma+alunos;
    }

        printf ("\n A soma das idades é: %d ", soma);


return 0;
}
*/

//EXERCICIO 8
/*
int main ()
{
    int qtddealunos;
    int alunos [qtddealunos];
    int x=0,soma=0,maior_idade=0;
    int y;

    printf ("Informe quantos anos há na sala: ");
    scanf  ("%d", &qtddealunos);

    printf ("\n\nDigite a idade dos alunos: ");

    for (y=0;y<qtddealunos;y++)
    {
        printf ("\n\nAluno %d: ", y+1);
        scanf  ("%d", &alunos[y]);
    }


    for (x=0;x<qtddealunos;x++)
    {
        soma = soma+alunos[x];

        if (alunos[x]>maior_idade)
        {
        maior_idade = alunos[x];
        }

    }

        printf ("\n A soma das idades é: %d ", soma);
        printf ("\n A maior idade é: %d ", maior_idade);



return 0;
}
*/

// Exercicio 9
//
/*
int main ()
{
    int qtddealunos;
    int alunos [qtddealunos];
    int soma=0,maior_idade=0,menor_idade = 0;
    int x;


    printf ("Informe quantos anos há na sala: ");
    scanf  ("%d", &qtddealunos);

    printf ("\n\nDigite a idade dos alunos: ");

    for (x=0;x<qtddealunos;x++)
    {
        printf ("\n\nAluno %d: ", x);
        scanf  ("%d", &alunos[x]);
    }

     menor_idade = alunos[0];
     maior_idade = alunos[0];

    for (x=0;x<qtddealunos;x++)
    {
        soma = soma+alunos[x];
    }

    for (x=0;x<qtddealunos;x++){

    if (alunos[x]>maior_idade)
        {
        maior_idade = alunos[x];
        }
    }


    for(x=0;x<qtddealunos;x++)
    {
        if(alunos[x] < menor_idade)
        {
                menor_idade=alunos[x];
        }
    }


        printf ("\n A soma das idades é: %d ", soma);
        printf ("\n A maior idade é: %d ", maior_idade);
        printf ("\n A menor idade é: %d ", menor_idade);



return 0;
}
*/
//EXERCICIO int main 10
//
/*
int main ()
{

    int qtddealunos;
    float alunos [qtddealunos];
    float soma=0,maior_idade=0,menor_idade = 0;
    int x;


    printf ("Informe quantos anos há na sala: ");
    scanf  ("%d", &qtddealunos);

    printf ("\n\nDigite a idade dos alunos: ");

    for (x=0;x<qtddealunos;x++)
    {
        printf ("\n\nAluno %d: ", x);
        scanf  ("%f", &alunos[x]);
    }

     menor_idade = alunos[0];
     maior_idade = alunos[0];

    for (x=0;x<qtddealunos;x++)
    {
        soma = soma+alunos[x];
    }

    for (x=0;x<qtddealunos;x++)
    {

    if (alunos[x]>maior_idade)
        {
        maior_idade = alunos[x];
        }
    }

    for(x=0;x<qtddealunos;x++)
    {
        if(alunos[x] < menor_idade)
        {
                menor_idade=alunos[x];
        }
    }
        printf ("\n A soma das idades é: %.2f ", soma);
        printf ("\n A maior idade é: %.2f ", maior_idade);
        printf ("\n A menor idade é: %.2f ", menor_idade);
        printf ("\n A media das idades é: %.2f ", soma/qtddealunos)
}
*/

//Exercicios 11
//
/*
int main(){
    double depositos[10];
    int qtdDepositos = 0;
    int op;
    int x;
    do{
        printf(" *** Menu ***\n");
        printf("0 - Sair\n")    ;
        printf("1 - Depositar\n");
        printf("2 - Ver saldo\n");
        printf("3 - Ver historico de depositos\n");
        printf("Entre com a opcao desejada: \n");
        scanf("%d", &op);
        switch(op){
            case 0:
                printf("Bye..\n");
                break;
            case 1:
                printf(" *** Depositar ***\n");
                printf("Entre com o valor do deposito: \n");
                scanf("%lf", &depositos[qtdDepositos]);
                qtdDepositos++;
                printf("Deposito efetuado com sucesso\n");
                break;
            case 2:
                printf(" *** Saldo ***\n");
                double saldo = 0;
                for(x=0;x<qtdDepositos;x++){
                    saldo +=depositos[x];
                }
                printf("Saldo: %0.2lf\n", saldo);
                break;
            case 3:
                printf(" *** Historico ***\n");
                printf("Historico de deposito\n");
                for(x=0;x<qtdDepositos;x++){
                    printf("%0.2lf\n", depositos[x]);
                }
                break;
            default:
                printf("Opcao invalida\n");
                break;
        }
    }while(op!=0);
}
*/
