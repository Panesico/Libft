#Define the Name of the executable
NAME = libft.a
#Compilation
CC = gcc
# Define the C compiler and flags
CFLAGS = -Wall -Wextra -Werror
# Define the source files and object files
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

# Define the object file rule
%.o : %.c
	@$(CC) -c $(CFLAGS) $< -o $@ 
$(NAME): $(OBJS)
	@ar src $(NAME) $(OBJS)
# Define the clean rule
.PHONY: all clean fclean re
all: $(NAME)

clean:
	rm -f  $(OBJS) 
fclean: clean
	rm -f  $(NAME) 
re: fclean all