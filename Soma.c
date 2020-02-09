#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv [])
{
    int x, total = 0;
    printf  ("\nQtd Valores: %d",argc);
    for (x=1;x<argc;x++){
        total += atoi(argv[x]);
    }

    printf  ("\nTotal: %d\n", total);
    return 0;
}
