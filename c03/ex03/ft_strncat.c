char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i = 0;

    while (dest[i])
        i++;
    while (*src && nb--)
        dest[i++] = *src++;
    return (dest);
}