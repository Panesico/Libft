void	*ft_memcpy(void *dst, const void *src, unsigned int n)
{
	unsigned int	i;
	char	*src2;
	char	*dst2;

	i = 0;
	src2 = (char *)src;
	dst2 = (char *)dst;
	if (!dst2 && !src2)
		return (0);
	while (i < n)
	{
		*dst2 = *src2;
		src2++;
		dst2++;
		i++;
	}
	return (dst);
}