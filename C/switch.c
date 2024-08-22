#include <stdio.h>
#include <stdlib.h>

void metodo_01 (void)
{

    printf ("\n%s", "Metodo 01");
    printf ("\n%s", "Aperte ENTER para continuar.");
    getchar ();
}

void metodo_02 (void)
{

    printf ("\n%s", "Metodo 02");
    printf ("\n%s", "Aperte ENTER para continuar.");
    getchar ();
}

int main (int argc, char* argv [])
{
    int opcao = 0;
    
    do
    {
    
    printf ("\n%s", "Escolha um dos metodos.");
    printf ("\n%s", "Opcoes: ");
    printf ("\n%s", "0 - Terminar");
    printf ("\n%s", "1 - metodo_01 2 - metodo_02");
    printf ( "\n%s", "Opcao = " );
    scanf ("%d", &opcao); getchar ();

        switch (opcao)
        {
        case 0:
        break;
        
        case 1:
        metodo_01 ();
        break;

        case 2:
        metodo_02 ();
        break;
        
        default:
        printf ("\n%s", "\nERRO opcao invalida.");
        break;
        }
    } while (opcao != 0);
    
    printf ("\n%s", "Aperte ENTER para terminar.");
    getchar ();
    return (0);
}