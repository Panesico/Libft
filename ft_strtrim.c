int	ft_strchrcmp(char c, char const *set, size_t counter)
{
	size_t i;

	i = 0;
	while(set[i])
	{
		if(c == str[counter])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t j;
	size_t k;
	char *str;
	size_t s1_len;

	s1_len = ft_strlen(s1);
	str = (char *)malloc(s1_len * sizeof(char));
	if(!str)
		return (0);
	i = 0;
	while(ft_strchrcmp(s[i], set, i))
		i++;
	j = s1_len;
	while(ft_strchrcmp(s[j], set, j))
		j--;
	k = 0;
	while(i <= j)
		str[k++] = s1[i++];
	return (str);
}