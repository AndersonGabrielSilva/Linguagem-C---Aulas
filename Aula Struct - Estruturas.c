#include <stdio.h>
#include <stdlib.h>
/*
Atravez das Estrutura de dados é possivel armazenar valores
de tipo Inteiro (int), valores reais( ponto flutuante - float)
tipo char e etc.
*/
//int main()
{
// definição de uma estrutura
   struct horario
   {
        int horas;
        int minutos;
        int segundos;
   };
// declaração de uma estrutura
   struct horario agora;

/*
Inicialização dos membros das
variaveis da minha estrutura:

Escreve o nome da minha estrutura
ponto e depois o nome da variavel
que deseja alterar.
*/
   agora.horas = 15;
   agora.minutos = 17;
   agora.segundos = 30;

    printf ("\n%i:%i:%i", agora.horas,agora.minutos,agora.segundos);

    return 0;
}
