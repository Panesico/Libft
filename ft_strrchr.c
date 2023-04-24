int *ft_strrchr(const char *str, int c)
{
    int i;

    i = = ft_strlen(str);
    while(i >= 0)
    {
        if(str[i] == c)
            return (str);
        i--;
    }
    return (0);
}