#include "io.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main (int argc, char* argv [])
{
    int x = 0;

    printf ("\n%s", "Entre com um valor inteiro: ");
    scanf ("%d", &x); getchar ();
    
    if (x % 2 == 0)
    {
        printf ("%s (%d)\n", "Valor par: ", x);
    }
    else
    {
        printf ("%s (%d)\n", "Valor impar: ", x);
    }

    IO_pause ("\nAperte ENTER para continuar.\n");
}