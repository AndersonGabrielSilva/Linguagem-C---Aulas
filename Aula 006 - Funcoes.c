#include <stdio.h>
#include <stdlib.h>
#include "pizzafunca.h"


//Exemplo do professor
// Função Void desenhar Linha
/*
void desenharLinha (){

    printf ("\n");

    for (int x =0; x<80;x++)
    {
        printf ("-");
    }
    printf ("\n");
}


int main()
{
        desenharLinha();
        printf ("Anderson Gabriel");
        desenharLinha();
    return 0;
}*/

// Exemplo 2
/*
void desenharLinha (){

    printf ("\n");

    for (int x =0; x<80;x++)
    {
        printf ("-");
    }
    printf ("\n");
}

void desenharAsterisco (){

    printf ("\n");

    for (int x =0; x<80;x++)
    {
        printf ("*");
    }
    printf ("\n");
}
void desenharLinhadupla(){
     desenharAsterisco();
     desenharLinha();
     }

     int main()
{
        desenharLinhadupla();
        printf ("Anderson Gabriel");
        desenharLinhadupla();
    return 0;
}
*/

//Exemplo 3
// Como indicar o que vai ser incluido na função
/*
void desenharLinha (char simbolo,int qtd){

    printf ("\n");

    for (int x =0; x<qtd;x++)
    {
        printf ("%c", simbolo);
    }
    printf ("\n");
}

     int main()
{
        desenharLinha('a',40);
        printf ("Anderson Gabriel");
        desenharLinha('b',80);
    return 0;
}
*/

// Exercicio 4
//

//int calcularAposta (int aluno , int pacoquinha)
//{
    //int total;
    //total = aluno * pacoquinha;
    //return total;
  //  return (aluno*pacoquinha);
/*
}

int main()
{
        int qtdAlunos, qtdPacoquinha,total;

        printf ("Aposta\n");
        printf ("Entre com a quantidade de Alunos: ");
        scanf  ("%d", &qtdAlunos);
        printf ("\n Entre com a quantidade de pacoquinha");
        scanf  ("%d", &qtdPacoquinha);
        //total = calcularAposta (qtdAlunos,qtdPacoquinha);
        //printf ("\n Total: %d", total);
        printf ("\n Total: %d", calcularAposta (qtdAlunos,qtdPacoquinha));
    return 0;
}
*/
/*
A função int retorna um numero inteiro 0 ou 1, para informar ao sistema operacional
se o programa tem algum erro ou não.
Sendo, return 0 -> sem erros.
       return 1 -> Contém erros.
*/
/*

int modificarvalor (int numero1, int numero2){
    int total;
    total = numero1 + numero2;

    return total;
}

int main()
{
    int valor1,valor2;
    int total;

    printf  ("\nDigite o valor 1 ");
    scanf   ("%d", &valor1);
    printf  ("\nDigite o valor 2 ");
    scanf   ("%d", &valor2);

    total = modificarvalor(valor1,valor2);
    printf ("\n Valor: %d ",total);
return 0;
}
*/
/*

void modificadorvalor(float *numero){
 *numero /= 16;
}

int main(){
        float valor = 10;
        modificadorvalor(&valor);
        printf ("\n Valor: %.2f", valor);
return 0;
    }
    */


int main()
{
    int valorA,valorB;

    valorA = receberValorUsuario(1);
    valorB = receberValorUsuario(2);

    printf ("\n A soma é: %d", modificarvalor(valorA,valorB));

return 0;
}


int modificarvalor (int numero1, int numero2){

    return (numero1 + numero2);
}
int receberValorUsuario (qualvalor){
    int valor;
    printf ("\n Digite o Valor %d: ", qualvalor);
    scanf  ("%d", &valor);
return valor;
}
