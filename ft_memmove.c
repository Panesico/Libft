void *ft_memmove(void *dst, const void *src, unsigned int n)
{
	char	*src2;
	char	*dst2;
	unsigned int i;

	i = 0;
	src2 = (char *)src;
	dst2 = (char *)dst;
	if (!dst2 && !src2)
		return (0);
	if (src2 < dst2)
	{
		while (i < n)
		{
			dst2[i] = src2[i];
			i++;
		}
	}
	else
		ft_memcpy(dst2, src2, n);
	return (dst);
}