void	*ft_memchr(const void *s, int c, unsigned int n)
{
	while (n > 0)
	{
		if (*s == c)
			return (s);
		s++;
		n--;
	}
	return (0);
}