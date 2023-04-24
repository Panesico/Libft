char	*ft_strnstr(const char *s1, const char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	if(*s2 == 0 || s1 == s2)
		return ((char *)s1);
	i = 0;
	while (i < n && s1[i])
	{
		j = 0;
			while(s1[i] && s2[j] && i < n)
			{
				if(s1[i] == s2[j++])
					i++;
				else
					break ;
			}
		if(!s2[j])
			return ((char *)s1 + i - j);
		i++;
	}
	return (0);
}