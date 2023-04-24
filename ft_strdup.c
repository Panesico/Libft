#include <stdlib.h>

char *ft_strdup(const char *s)
{
	size_t i;
	char *str;

	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	while(s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}