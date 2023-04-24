void	ft_bzero(void *str, unsigned int n)
{
	int i;

	i = 0;
	while(i < n)
	{
		str[i] = 0;
		i++;
	}
}