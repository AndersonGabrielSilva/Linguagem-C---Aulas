  #include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 16;
    int y = 3;

    /*
    Na linha abaixo o resuldado desta divisão sera um numero inteiro
    pois a linguagem C entende ao dividir dois numeros inteiros
    neste caso int x e int y o resultado deveria ser tambem um inteiro
    mesmo a variavel resultado sendo do tipo float
    */

    //float resultado = x / y;

    /*
    Para resolver este problema ultilizamos o "Casting" que seria
    uma maneira de forçar que o resuldado desta divisão seja do tipo float.
    para se ultilizar esta função:
    abre as chaves () e dentro dela indique o tipo do resultado
    */
    float resultado = (float) x / y;


    printf ("%f\n", resultado);
    return 0;
}
