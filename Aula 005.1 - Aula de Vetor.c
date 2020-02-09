#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int qtddealunos;
    int alunos [qtddealunos];
    int ordem;
    int x,y;

    printf ("Informe quantos anos há na sala: ");
    scanf  ("%d", &qtddealunos);

    printf ("\n\nDigite a idade dos alunos: ");

    for (x=0;x<qtddealunos;x++)  // Laço de repetição que armazena os numeros
    {
        printf ("\n\nAluno %d: ", x);
        scanf  ("%d", &alunos[x]);
    }

    /*
    O comando for abaixo, irá comparar os valores de cada vetor [x] com o valor
    do proximo vetor [x+1], se o valor de [x=1] for menor que [x], troca os valores
    a variavel ordem serve somente para auxiliar a função.*/

    for (x=0;x<qtddealunos;x++)
    {

        for (y=0; y<qtddealunos; y++)
        {

          if (alunos[x]<alunos [y])
          {
            ordem = alunos[x];//coloca o valor do vetor [x] na variavel ordem
            alunos [x] = alunos [y];// coloca o valor do vetor [x+1]
            alunos[y] = ordem;// nesta linha retorna o valor de x para o local x+1, trocando os valores
          }

        }

    }

   for (x=0;x<qtddealunos;x++)
   {
    printf ("\nO valor de %d agora é: %d",x, alunos[x]);
   }

return 0;
}
