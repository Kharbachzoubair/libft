# Variables
CC = gcc                      # Compiler
CFLAGS = -Wall -Wextra -Werror -Ilibft # Include libft directory
LIBFT_DIR = libft             # Directory containing libft
SRC_DIR = src                  # Directory containing your source files
OBJ_DIR = obj                  # Directory for object files
NAME = my_program              # Name of the output executable

# Source files
SRC = $(wildcard $(SRC_DIR)/*.c) $(wildcard $(LIBFT_DIR)/*.c)

# Object files
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
OBJ += $(LIBFT_DIR)/$(OBJ_DIR)/%.o

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)           # Create object directory if it doesn't exist
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(LIBFT_DIR)/%.c
	@mkdir -p $(LIBFT_DIR)/$(OBJ_DIR) # Create libft object directory if it doesn't exist
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)              # Remove object files

fclean: clean
	rm -f $(NAME)                  # Remove the executable

re: fclean all

.PHONY: all clean fclean re      # Declare targets as phony
