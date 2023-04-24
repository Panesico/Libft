int ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
    int i;

    i = 0;
    while(i < n)
    {
        if(s1[i] == s2[i])
			i++;
        else
        {
			if(s1[i] < s2[i])
				return (-1);
			if(s1[i] > s2[i])
				return (1);
        }
    }
	return (0);
}