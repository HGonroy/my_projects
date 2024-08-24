#include "io.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main (int argc, char* argv [])
{
    int first = 0;
    int second = 0;

    printf ("\n%s", "Entre com um valor inteiro: ");
    scanf ("%d", &first); getchar ();

    printf ("\n%s", "Entre com outro valor inteiro: ");
    scanf ("%d", &second); getchar ();
    
    if (first % 2 == 0)
    {
         printf ("\n");
    }
    else if (first < 0)
    {
       printf ("\n%s", "O primeiro valor e' impar e negativo.");
    }
    else
    {
        printf ("\n");
    }

    if ((second % 2 == 0) && (second >= 0))
    {
        printf ("\n%s", "O segundo valor e' par e positivo.");
    }
    else
    {
        printf ("\n");
    }

    IO_pause ("\nAperte ENTER para continuar.\n");
}