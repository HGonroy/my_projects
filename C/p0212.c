#include "io.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main (int argc, char* argv [])
{
    int x = 0;

     x = IO_readint ( "Entrar com um valor inteiro: " );
    
    if (x % 2 == 0)
    {
        IO_printf ("%s (%d)\n", "Valor par: ", x);
    }

    if (x > 15)
    {
        IO_printf ("%s (%d)\n", "Valor maior que quinze: ", x);
    }
    else
    {
        IO_printf ("%s (%d)\n", "Valor menor que quinze: ", x);
    }

    if (x % 2 != 0)
    {
        IO_printf ( "%s (%d)\n", "Valor impar: ", x );
    }

    if (x < -15)
    {
        IO_printf ( "%s (%d)\n", "Valor menor que quinze negativo: ", x );
    }
    else
    {
        IO_printf ( "%s (%d)\n", "Valor maior que quinze negativo: ", x );
    }

    IO_pause ("\nAperte ENTER para continuar.\n");
}