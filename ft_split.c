int	ft_arraylen(char *str, char delimiter)
{
	size_t i;
	size_t del_count;

	if(!str)
		return (0);
	i = 0;
	delcount = 1;
	while(str[i])
	{
		if(str[i] == delimiter)
			del_count++;
		i++;
	}
	return (del_count);
}

int	ft_wordlen(char *str, char *del, size_t i)
{
	size_t len;

	len = 0;
	while (str[i] != del)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{

	size_t	i;
	size_t	j;
	size_t	s_len;
	char	**array;

	array = (char **)malloc((ft_arraylen(s, c) + 1) * sizeof(char *));
	if (!array)
		return (0);
	i = 0;
	while (i < ft_arraylen(s, c))
	{
		j = 0;
		array[i] = (char *)malloc((ft_wordlen(s, c, i) + 1) * sizeof(char));
		while (*s != c && *s)
		{
			array[i][j] = *s;
			s++;
			j++;
		}
		array[i][j] = 0;
		i++;
		s++;
	}
	array[i] = 0;
	return (array);
}