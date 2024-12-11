# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Library name
NAME = libftprintf.a

# Source files (all .c files in the current directory)
SRC = \
	ft_printf.c \
	ft_put_hex.c \
	ft_putchar.c \
	ft_putnbr.c \
	ft_putptr.c \
	ft_putstr.c

# Object files
OBJ = $(SRC:.c=.o)

# Default target: create the library
all: $(NAME)

# Rule to create the library from object files
$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "Library $(NAME) created successfully."

# Rule to compile .c files into .o files
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $< to $@"

# Clean object files
clean:
	@rm -f $(OBJ)
	@echo "Object files removed."

# Clean everything (object files and the library)
fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) removed."

# Rebuild the project
re: fclean all

# Phony targets to avoid conflicts with files of the same name
.PHONY: all clean fclean re