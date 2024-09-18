#include <stdio.h>

void block_01 (int x)
{
    printf ("%d\n", x);
}

void for_01 (int inicial, int final, int variacao)
{
    if (inicial <= final)
    {
    block_01 (inicial);
    for_01 (inicial+variacao, final, variacao);
    }
}

void for_02 (int inicial, int final, int variacao)
{
    if (inicial >= final)
    {
    block_01 (inicial);
    for_02 (inicial+variacao, final, variacao);
    }
}

int menor_ou_igual (int x, int y)
{
    return (x<=y);
}

void for_03 (int inicial, int final, int variacao)
{
    if (menor_ou_igual (inicial, final))
    {
    block_01 (inicial);
    for_03 (inicial+variacao, final, variacao);
    }
}

int block_02 (int x, int y)
{
    int teste = (x <= y);
    if (teste)
    {
        printf ("%d\n", x);
        return (teste);
    }
}

void for_04 (int inicial, int final, int variacao)
{
    if (block_02 (inicial, final))
    {
    for_04 (inicial+variacao, final, variacao);
    }
}

int block_03 (int x, int y)
{
    int teste = (x >= y);
    if (teste)
    {
        printf ("%d\n", x);
        return (teste);
    }
}

void for_05 (int inicial, int final, int variacao)
{
    if (block_03 (inicial, final))
    {
    for_05 (inicial+variacao, final, variacao);
    }
}

int main (void)
{
    printf ("for_01\n");
    for_01 (1, 5, 1);
    printf ("for_02\n");
    for_02 (5, 1, -1);
    printf ("for_03\n");
    for_03 (1, 5, 1);
    printf ("for_04\n");
    for_04 (1, 5, 1);
    printf ("for_05\n");
    for_05 (5, 1, -1);
    return (0);
}