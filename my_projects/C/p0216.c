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
        printf ("\n%s", "O primeiro valor e' par.");
    }
    else
    {
        printf ("\n"); //printf ("\n%s", "O primeiro valor e' impar.");
    }

    if (second % 2 == 0)
    {
        printf ("\n"); //printf ("\n%s", "O segundo valor e' par.");
    }
    else
    {
        printf ("\n%s", "O segundo valor e' impar.");
    }

    IO_pause ("\nAperte ENTER para continuar.\n");
} //Note que eu não coloquei para aparercer as mensagens nos comentarios porque não foi o que a atividade estava pedindo.