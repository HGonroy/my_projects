#include "io.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main (int argc, char* argv [])
{
     int x = 0;

    x = IO_readint("Entrar com um valor inteiro: ");

    if ((10 <= x && x <= 25) && (15 < x && x < 50))
    {
        IO_printf ("%s (%d)\n", "Valor pertencente a intersecao de [10:25] e (15:50): ", x);
    }

    else if ((10 <= x && x <= 25) || (15 < x && x < 50))
    {
        if (10 <= x && x <= 25)
    {
        IO_printf ("%s (%d)\n", "Valor pertencente a [10:25]: ", x);
    }

    if (15 < x && x < 50)
    {
        IO_printf ("%s (%d)\n", "Valor pertencente a (15:50): ", x);
    }
    }

    else
    {
        IO_printf ("%s (%d)\n", "Valor nao pertencente a intersecao nenhuma", x);
    }

    IO_pause("\nAperte ENTER para continuar.\n");
}
// tive ajuda de um amigo para polir as mensagens do código. Utilizando o comando "else if".