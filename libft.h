#ifndef LIBFT_H
#define LIBFT_H

typedef struct s_list
{
	void *content;
	struct s_list *next;
}	t_list;

int		ft_atoi(const char *str);
void	ft_bzero(void *str, unsigned int n);
void	*ft_calloc(size_t nelem, size_t elsize);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int 	ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_itoa(int n);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
void	*ft_memchr(const void *s, int c, unsigned int n);
int		ft_memcmp(const void *s1, const void *s2, unsigned int n);
void	*ft_memcpy(void *dst, const void *src, unsigned int n);
void 	*ft_memmove(void *dst, const void *src, unsigned int n);

#endif //LIBFT_H