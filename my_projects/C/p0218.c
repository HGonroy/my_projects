#include "io.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main (int argc, char* argv [])
{
    double first = 0.0;
    double second = 0.0;

    printf ("\n%s", "Entre com um valor inteiro: ");
    scanf ("%lf", &first); getchar ();

    printf ("\n%s", "Entre com um valor inteiro: ");
    scanf ("%lf", &second); getchar ();

    second = second/2.0;

    if (first < second)
    {
        printf ("\n%s", "O valor de primeiro e' menor que o valor de segundo.");
    }

    if (first == second)
    {
        printf ("\n%s", "O valor de primeiro e' igual ao valor de segundo.");
    }

    if (first > second)
    {
        printf ("\n%s", "O valor de primeiro e' maior que o valor de segundo.");
    }

    IO_pause ("\nAperte ENTER para continuar.\n");
}