# Define the C compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror
# Define the source files and object files
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
# Define the target executable
TARGET = libft
# Define the build rule
$(TARGET): $(OBJS)
	@$(CC) $(CFLAGS) $^ -o $@
# Define the object file rule
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
# Define the clean rule
clean:
	rm -f $(TARGET) $(OBJS)