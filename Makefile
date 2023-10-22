CFLAGS  = -Wall -Wextra -Werror
NAME    = libft.a
AR		= ar -rcs
SRC		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atod.c ft_atof.c \
	ft_atoi.c ft_atol.c ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c ft_strmapi.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c get_next_line.c \
	get_next_line_utils.c ft_printf.c ft_printf_utils.c ft_printf_utils2.c \
	ft_itoa_printf.c ft_strcmp.c ft_strstr.c
OBJ		= ${SRC:.c=.o}
SRCBON	= \
		ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJBON	= ${SRCBON:.c=.o}

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
bonus: $(OBJBON) $(OBJ)
	@$(AR) $(NAME) $(OBJBON) $(OBJ)
	@echo Making Libft bonus...
clean:
	@rm -rf *.o
fclean: clean
	@rm -f $(NAME)

%.o: %.c
	@gcc $(CFLAGS) -o $@ -c $<

re: fclean all

.PHONY: all clean fclean re bonus
