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

 if ( 20 <= x && x <= 60 )
 {
    IO_printf ( "%s (%d)\n", "Valor pertencente ao intervalo [20:60] ", x );
 }
    else
 {
    IO_printf ( "%s (%d)\n", "Valor fora do intervalo [20:60] ", x );

    IO_pause ("\nAperte ENTER para continuar.\n");
}
}