char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) \\ ponteiro para função.
{
  size_t  s_len;

  s_len = ft_strlen(s);
  str = ft_strdup(s);
  if (!str)
    return (NULL);
  
}

\\ strmapi recebe não só valores comuns (como int, char *, etc), mas também recebe o endereço de outra função, que será chamada internamente;
\\ um ponteiro para função é um tipo de dado que armazena o endereço de memória de uma função
