#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv [])
{
    double x;
    printf ("\n%s", "Escreva um numero inteiro: ");
    scanf ("%lf", &x); getchar ( );
    printf ("\n%s%lf", "O valor digitado foi: ", x);
    printf ("\n%s", "Aperte ENTER para terminar."); getchar ();
    return (0);
}