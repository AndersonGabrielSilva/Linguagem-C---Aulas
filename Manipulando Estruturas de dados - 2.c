#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
Dentro de uma Estrutura é possivel armazenar qualquer tipo de variavel
segue abaixo o teste, desta funcionalidade.
ultilizando estrutura conseguimos reapoveitar varias vezes as mesmas variaveis
*/
   struct horario
   {
        int horas;
        int minutos;
        int segundos;
        double teste;
        char letra;
   };
   struct horario agora;

   agora.horas = 15;
   agora.minutos = 17;
   agora.segundos = 30;

   struct horario depois;
   depois.horas = agora.horas + 10;
   depois.minutos = agora.minutos +15;
   depois.segundos = agora.segundos + 30;
   depois.teste = 50.55/123;
   depois.letra = 'a';

    printf ("\n%i", depois.horas);
    printf ("\n%i", depois.minutos);
    printf ("\n%i", depois.segundos);
    printf ("\n%.2f", depois.teste);
    printf ("\n%c",depois.letra);

    return 0;

}
