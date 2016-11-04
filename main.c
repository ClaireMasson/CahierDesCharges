#include <stdio.h>
#include <stdlib.h>

int soustraction (int c, int d)
{
    return c-d;
}
int addition( int a, int b )
{
    return a+b;
}
{
    int result;
    result = addition (1,4);
    printf("resultat de l'addition est = %d\n", result);
    result = soustraction (1,4);
    printf("resultat de la soustraction est %d\n", result);
    return 0;
}
