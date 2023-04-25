void ft_putendl_fd(char *s, int fd)
{
	size_t i;

	i = -1;
	while(s[++i])
		ft_putchar_fd(s[i], fd);
	write(fd, "\n", 1);
}