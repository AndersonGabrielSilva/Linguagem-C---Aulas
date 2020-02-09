#include <stdio.h>
#include <stdlib.h>
#include "pizza.h"

int main()
{
    int valorA,valorB;

    valorA = receberValorUsuario(1);
    valorB = receberValorUsuario(2);

    printf ("\n A soma é: %d", modificarvalor(valorA,valorB));

return 0;
}


