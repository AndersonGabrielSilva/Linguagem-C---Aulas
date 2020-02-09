#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// EXERCICIO 01
/*
int main()
{
    char nome [81];
    int qtdcaracteres=0;
    int x,y,aux;

    printf ("Digite seu nome: ");
    scanf  ("%80s",nome);

    qtdcaracteres = strlen (nome);



    for (x=qtdcaracteres; x >= 0; x--){

    printf ("%c", nome[x]);
    }


    return 0;
}
*/
// EXERCICIO 2

int main ()
{
    char palavra [71];
    char palindromo [71];
    int x,b;

        printf ("\nEntre com a palavra: ");
        scanf ("%70s", palavra);

        for (x=0;x<strlen(palavra);x++)
        {
          b =strlen(palavra)-(x+1);
            palindromo[x] = palavra[b];
            printf ("\n%d\t%d",x,b);
        }
        printf ("\nA palavra %s palindromo: %s,",palavra, palindromo);
        if (strcmp (palavra,palindromo)==0)
        {
            printf ("\n um palindromo");
        }else {
            printf ("\nNão é um palindromo");
        }
        return 0;

return 0;
}
