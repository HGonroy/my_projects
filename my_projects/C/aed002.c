// 835111_AED1
#include <stdio.h>
#include <string.h>

/*
*/

int somar_1 (int n)
{
	int soma = 0;  //base
	if (n>0) //teste de continuidade
	{
		printf (">n=%d soma=%d somar_1(%d-1)\n", n, soma, n); getchar ();
		soma = n + somar_1 (n-1);
		printf (">n=%d soma=%d somar_1(%d-1)\n", n, soma, n); getchar ();
	}
	return (soma);
}

int somar_2 (int n)
{
	int soma = 0;  //base
	if (n>(-5)) //teste de continuidade
	{
		printf (">n=%d soma=%d somar_2(%d-1)\n", n, soma, n); getchar ();
		soma = somar_2 (n-1) + n;
		printf (">n=%d soma=%d somar_2(%d-1)\n", n, soma, n); getchar ();
	}
	return (soma);
}

int somar_3 (int k, int n)
{
	int soma = 0;  //base
	if (k<=n) //teste de continuidade
	{
		printf (">k=%d n=%d soma=%d somar_3(%d+1, %d)\n", k , n, soma, k , n); getchar ();
		soma = k + somar_3 (k+1, n);
		printf ("<k=%d n=%d soma=%d somar_3(%d+1, %d)\n", k , n, soma, k , n); getchar ();
	}
	return (soma);
}

int somar_4 (int k, int n)
{
	int soma = 0;  //base
	if (k<=n) //teste de continuidade
	{
		printf (">k=%d n=%d soma=%d somar_4(%d+1, %d)\n", k , n, soma, k , n); getchar ();
		soma = n + somar_4 (k, n-1);
		printf ("<k=%d n=%d soma=%d somar_4(%d+1, %d)\n", k , n, soma, k , n); getchar ();
	}
	return (soma);
}

int somar_5 (int k, int n)
{
	int soma = 0;  //base
	if (k<n) //teste de continuidade
	{
		printf (">k=%d n=%d soma=%d somar_5(%d+1, %d)\n", k , n, soma, k , n); getchar ();
		soma = k + somar_5 (k+1, n-1) + n;
		printf ("<k=%d n=%d soma=%d somar_5(%d+1, %d)\n", k , n, soma, k , n); getchar ();
	}
	else
	{
		if (k==n)
		{
		printf (">k=%d n=%d soma=%d somar_5(%d+1, %d)\n", k , n, soma, k , n); getchar ();
		soma = k;
		printf ("<k=%d n=%d soma=%d somar_5(%d+1, %d)\n", k , n, soma, k , n); getchar ();
		}
	}
	return (soma);
}

void method_01 ( void )
{
    // identificar
    printf("%s\n", "\nMetodo_01\n");
	printf ("soma_1 = %d\n", somar_1 (5));
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_02 ( void )
{
    // identificar
    printf("%s\n", "\nMetodo_02\n");
	printf ("soma_2 = %d\n", somar_2 (5));
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_03 ( void )
{
    // identificar
    printf("%s\n", "\nMetodo_03\n");
	printf ("soma_3 = %d\n", somar_3 (1,5));
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_04 ( void )
{
    // identificar
    printf("%s\n", "\nMetodo_04\n");
	printf ("soma_3 = %d\n", somar_4 (1,5));
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_05 ( void )
{
    // identificar
    printf("%s\n", "\nMetodo_05\n");
	printf ("soma_3 = %d\n", somar_5 (1,5));
	printf ("soma_3 = %d\n", somar_5 (1,6));
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_06 ( void )
{
    // identificar
    printf("%s\n", "\nMetodo_06\n");
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_07 ( void )
{
    // identificar
    printf("%s\n", "\nMetodo_07\n");
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_08 ( void )
{
    // identificar
    printf("%s\n", "\nMetodo_08\n");
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_09 ( void )
{
    // identificar
    printf("%s\n", "\nMetodo_09\n");
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

void method_10 (void)
{
    // identificar
    printf("%s\n", "\nMetodo_10\n");
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

// ---

/*
   Acao principal.
*/
int main ( void )
{
    // definir dados
    int opcao = 0;
    // identificar
    printf("\n%s\n\n", "835111_AED1");
    // acoes
       // repetir
       do
       {
        // ler opcao do teclado
        printf ( "%s", "Qual a opcao? " );
        scanf  ( "%d", &opcao ); getchar( );
        // mostrar valor lido
        printf ( "%s%d\n", "opcao = ", opcao );
        // escolher opcao
        switch ( opcao )
        {
           case  0: /* nada */     break;
           case  1: method_01 ( ); break;
           case  2: method_02 ( ); break;
           case  3: method_03 ( ); break;
           case  4: method_04 ( ); break;
           case  5: method_05 ( ); break;
           case  6: method_06 ( ); break;
           case  7: method_07 ( ); break;
           case  8: method_08 ( ); break;
           case  9: method_09 ( ); break;
           case 10: method_10 ( ); break;
           default: printf ( "\n%s\n", "ERRO: Opcao invalida.\n\n" );
            break;
        }
       } while ( opcao != 0 );
    // encerrar
    printf("%s\n", "\nApertar ENTER para terminar\n");
    getchar( );
	return ( 0 );
}
/*
    Teste e anotacoes
*/
