#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int x;
    int *p1,*p2;
    x=5;
    p1=&x;
    p2=p1;

    printf  ("\nEndereço: \tP1:%p\tP2:%p2\tX:%p", p1,p2, &x);
    printf  ("\nValor:  \t\tP1:%d \tP2:%d \tX:%d", *p1,*p2, x);


    *p2=*p2+*p1;

    printf  ("\n\nSOMOU:\n");
    printf  ("\nEndereço: \tP1:%p\tP2:%p2\tX:%p", p1,p2, &x);
    printf  ("\nValor:    \t\tP1:%d \t\t\tP2:%d \t\t\tX:%d", *p1,*p2, x);

    p2=p2+100;

    printf  ("\n\nEITA\n");
    printf  ("\nEndereço: \tP1:%p\tP2:%p2\tX:%p", p1,p2, &x);
    printf  ("\nValor: \t\tP1:%d   \t\tP2:%d\t\t\tX:%d", *p1,*p2, x);
    return 0;

}*/

int main () {

    int *p ,x;

    printf  ("\nInt: %d bytes\n", sizeof(int));

    p = (int*) malloc(10 * sizeof (int));

    if (!p){
        printf ("\nFalha na alocação de memoria.");
        return 1;
    }

    for (x=0;x<10;x++){

        p[x] = x;
    }

    for (x=0;x<10;x++)
    {
        printf ("%d\t", p[x]);
    }

    free (p);
    p = NULL;

return 0;
}

