#include <stdio.h>
#include <stddef.h>    
#include <stdlib.h>    
#include <string.h>    
#include <stdarg.h>    
#include <stdbool.h>   
#include <ctype.h>     
#include <math.h>      
#include <time.h>      
#include <wchar.h>     
#include <iso646.h>

int readint ( char * text )
{
    int x = 0;
    printf ( "%s", text );
    scanf  ( "%d", &x   ); getchar ( );
    return ( x );
}

int f1 ( int n )
{ // somar numeros naturais ate' (n) termos
  // (crescente)
    int soma = 0;
    int x    = 0;
    int y    = 0;
    for (
          x = 1;
          x <= n;
          x = x+1
        )
    {
        y = x;
        //definir soma
        soma = soma + x;
        printf ("%d\t%d\t%d\n", x, y, soma);
    }
    return ( soma );
}

int f2 ( int n )
{ // somar numeros naturais ate' (n) termos
  // (crescente)
    int soma = 0;
    int x    = 0;
    int y    = 0;
    for (
          x = 1;
          x <= n;
          x = x+1
        )
    {
        y = (-1)*x+(n+1);
        //definir soma
        soma = soma + y;
        printf ("%d\t%d\t%d\n", x, y, soma);
    }
    return ( soma );
}

int f3 ( int n )
{ // somar numeros pares ate' (n) termos
    int soma = 0;
    int x    = 0;
    int y    = 0;
    for (
          x = 1;
          x <= n;
          x = x+1
        )
    {
        y = 2*x;
        //definir soma
        soma = soma + y;
        printf ("%d\t%d\t%d\n", x, y, soma);
    }
    return ( soma );
}

int f4 ( int n )
{ // somar numeros impares ate' (n) termos
    int soma = 0;
    int x    = 0;
    int y    = 0;
    for (
          x = 1;
          x <= n;
          x = x+1
        )
    {
        y = 2*x-1;
        //definir soma
        soma = soma + y;
        printf ("%d\t%d\t%d\n", x, y, soma);
    }
    return ( soma );
}

int f5 ( int n )
{ // somar quadrados dos naturais ate' (n) termos
    int soma = 0;
    int x    = 0;
    int y    = 0;
    for (
          x = 1;
          x <= n;
          x = x+1
        )
    {
        y = x*x;
        //definir soma
        soma = soma + y;
        printf ("%d\t%d\t%d\n", x, y, soma);
    }
    return ( soma );
}

int f6 (int n)
{
    int soma = 0;
    int x    = 1;
    int y    = 1;
    int z    = 1;

    for (
          x = 1;
          x <= n;
          x = x+1
        )
    {
        
        //definir soma
        soma = soma + z;
        //definir y
        y = 2*x;
        //definir z
        z = 2*y;
        printf ("%d\t%d\t%d\t%d\n", x, y, z, soma);
    }
    return (soma);
}
/*
*/
void method_01 ( void )
{
    // definir dados e resultados
    int n    = 0; // quantidade de termos
    int soma = 0; // soma de termos
    // identificar
    printf("%s\n", "\nMetodo_01\n");
    // acoes
    // ler a quantidade de termos
    n = readint ( "Quantos termos? " );
    // calcular a soma
    soma = f1(n);
    // mostrar a soma
    printf ( "%s%d\n", "soma = ", soma );
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_02 ( void )
{
    // definir dados e resultados
    int n    = 0; // quantidade de termos
    int soma = 0; // soma de termos
    // identificar
    printf("%s\n", "\nMetodo_02\n");
    // acoes
    // ler a quantidade de termos
    n = readint ( "Quantos termos? " );
    // calcular a soma
    soma = f2(n);
    // mostrar a soma
    printf ( "%s%d\n", "soma = ", soma );
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_03 ( void )
{
    // definir dados e resultados
    int n    = 0; // quantidade de termos
    int soma = 0; // soma de termos
    // identificar
    printf("%s\n", "\nMetodo_03\n");
    // acoes
    // ler a quantidade de termos
    n = readint ( "Quantos termos? " );
    // calcular a soma
    soma = f3(n);
    // mostrar a soma
    printf ( "%s%d\n", "soma = ", soma );
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_04 ( void )
{
    // definir dados e resultados
    int n    = 0; // quantidade de termos
    int soma = 0; // soma de termos
    // identificar
    printf("%s\n", "\nMetodo_04\n");
    // acoes
    // ler a quantidade de termos
    n = readint ( "Quantos termos? " );
    // calcular a soma
    soma = f4(n);
    // mostrar a soma
    printf ( "%s%d\n", "soma = ", soma );
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_05 ( void )
{
    // definir dados e resultados
    int n    = 0; // quantidade de termos
    int soma = 0; // soma de termos
    // identificar
    printf("%s\n", "\nMetodo_04\n");
    // acoes
    // ler a quantidade de termos
    n = readint ( "Quantos termos? " );
    // calcular a soma
    soma = f5(n);
    // mostrar a soma
    printf ( "%s%d\n", "soma = ", soma );
    // encerrar
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar( );
}

/*
*/
void method_06 ( void )
{
    // definir dados e resultados
    int n    = 0; // quantidade de termos
    int soma = 0; // soma de termos
    // identificar
    printf("%s\n", "\nMetodo_06\n");
    // acoes
    // ler a quantidade de termos
    n = readint ( "Quantos termos? " );
    // calcular a soma
    soma = f6(n);
    // mostrar a soma
    printf ( "%s%d\n", "soma = ", soma );
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

/*
*/
void method_10 ( void )
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
    printf("\n%s\n\n", "999999_AED1");
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
           default: printf ( "\n%s\n",
                           "ERRO: Opcao invalida.\n\n" );
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
