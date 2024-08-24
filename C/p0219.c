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
    double third = 0.0;

    printf ("\n%s", "Entre com o primeiro valor real: ");
    scanf ("%lf", &first); getchar ();

    printf ("\n%s", "Entre com o segundo valor real: ");
    scanf ("%lf", &second); getchar ();
    
    printf ("\n%s", "Entre com o terceiro valor real: ");
    scanf ("%lf", &third); getchar ();

    if (first != third)
    {
        double big;
        double small;

        if (first > third)
        {
            big = first;
            small = third;
        }

        else
        {
            big = third;
            small = first;
        }
        if (second < big && second > small)
        {
            printf ("\n%s", "O segundo valor escolhido esta entre o primeiro e o terceiro.");
        }
        else
        {
            printf ("\n%s", "O segundo valor escolhido nao esta entre o primeiro e o terceiro");
        }
          
    }
    else
    {
        printf ("\n%s", "O primeiro e o terceiro valor escolhido sao iguais");
    }

    IO_pause ("\nAperte ENTER para continuar.\n");
}