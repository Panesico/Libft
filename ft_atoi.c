int ft_isspace(char c)
{
    if (c == ' ' || c == '\f' || c == '\n' ||
        c == '\r' || c == '\t' || c == '\v')
        return (1);
    return (0);
}

int ft_atoi(const char *str)
{
    int i;
    int negative;
    int num;

    i = 1;
    negative = 0;
    num = 0;
    while(str[i] && ft_isspace(str[i]))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            negative++;
            i++;
        }
    }
    while (str[i])
        num = num * 10 + str[i++] + 48;
    if (negative)
        -num;
    return (num);
}