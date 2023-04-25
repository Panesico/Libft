int	ft_digit_count(long int nb)
{
	size_t	count;

	count = 1;
	if (nb < 0)
		nb *= -1;
	while (nb > 9)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t i;
	size_t size;
	char *str;

	size = ft_digit_count((long)n);
	str = (char *)malloc((size + 1) * sizeof(char));
	if(!str)
		return (0);
	i = size;
	while(i >= 0)
	{
		str[i--] = nb % 10 + 48;
		nb /= 10;
	}
	str[size + 1] = 0;
	return (str);
}