int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while(i < n)
	{
		if((unsigned char *)s1 < (unsigned char *)s2)
			return (-1);
		else if((unsigned char *)s1 > (unsigned char *)s2)
			return (1);
	}
	return (0);
}