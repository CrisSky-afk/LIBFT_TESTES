#include "libft.h"

static int ft_nblen(int nb)
{
    int     len;
    long    n; // para suportar o tamanho do int_min;

    len = 0;
    n = nb;
    if (n == 0)
        return (1);
    if (n < 0)
    {
        len++; // espaço para o sinal '-'
        n = -n; // converte para positivo com long para evitar overflow
    }
    while (n > 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

void    ft_alldig(char *str, long n, size_t *i)
{
    if (n >= 10)
        ft_alldig(str, n / 10, i);
    str[*i] = '0' + ((n % 10));
    (*i)++;
}

char    *ft_itoa(int n)
{
    char        *result;
    size_t      i;
    long        nb;

    result = (char *)malloc(sizeof(char) * (ft_nblen(n) + 1));
    i = 0;
    if (!result)
        return (NULL);
    if (n < 0)
    {
        result[0] = '-';
        i = 1;
    }
    else
    {
        i = 0;
    }
    nb = n;
    if (nb < 0)
        nb = -nb;
    ft_alldig(result, nb, &i);
    result[i] = '\0';
    return (result);
}

// int main (void)
// {
//     char str1[20];
//     size_t i = 0;
//     long n = 12345;

//     ft_alldig(str1, n, &i);
//     str1[i] = '\0'; // finaliza a string

//     printf("Resultado da recursiva: %s\n", str1);

//     return 0;
// }
