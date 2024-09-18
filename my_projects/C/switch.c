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

void metodo_03 (void)
{

    printf ("\n%s", "Metodo 03");
    printf ("\n%s", "Aperte ENTER para continuar.");
    getchar ();
}

void metodo_04 (void)
{

    printf ("\n%s", "Metodo 04");
    printf ("\n%s", "Aperte ENTER para continuar.");
    getchar ();
}

void metodo_05 (void)
{

    printf ("\n%s", "Metodo 05");
    printf ("\n%s", "Aperte ENTER para continuar.");
    getchar ();
}

void metodo_06 (void)
{

    printf ("\n%s", "Metodo 06");
    printf ("\n%s", "Aperte ENTER para continuar.");
    getchar ();
}

void metodo_07 (void)
{

    printf ("\n%s", "Metodo 07");
    printf ("\n%s", "Aperte ENTER para continuar.");
    getchar ();
}

void metodo_08 (void)
{

    printf ("\n%s", "Metodo 08");
    printf ("\n%s", "Aperte ENTER para continuar.");
    getchar ();
}

void metodo_09 (void)
{

    printf ("\n%s", "Metodo 09");
    printf ("\n%s", "Aperte ENTER para continuar.");
    getchar ();
}

void metodo_10 (void)
{

    printf ("\n%s", "Metodo 10");
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
    printf ("\n%s", "3 - metodo_03 4 - metodo_04");
    printf ("\n%s", "5 - metodo_05 6 - metodo_06");
    printf ("\n%s", "7 - metodo_07 8 - metodo_08");
    printf ("\n%s", "9 - metodo_09 10 - metodo_10");
    printf ( "\n%s", "Opcao = " );
    scanf ("%d", &opcao); getchar ();
    printf ("\n%s%d", "A opcao digitada foi: ", opcao);

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

        case 3:
        metodo_03 ();
        break;

        case 4:
        metodo_04 ();
        break;

        case 5:
        metodo_05 ();
        break;

        case 6:
        metodo_06 ();
        break;

        case 7:
        metodo_07 ();
        break;

        case 8:
        metodo_08 ();
        break;

        case 9:
        metodo_09 ();
        break;

        case 10:
        metodo_10 ();
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