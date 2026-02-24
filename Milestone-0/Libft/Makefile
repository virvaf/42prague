# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: virva <virva@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/11 11:53:59 by virva             #+#    #+#              #
#    Updated: 2025/12/06 13:27:22 by virva            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a
CC      = cc
CFLAGS  = -Wall -Wextra -Werror

SRC_DIR = .
OBJ_DIR = objs

SRC     = $(wildcard $(SRC_DIR)/*.c)
OBJ     = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))

# Default target
all: $(NAME)

# Create the static library from object files
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Compile .c -> .o into OBJ_DIR (creates OBJ_DIR if missing)
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -I. -c $< -o $@

# Ensure object directory exists
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Remove object files directory
clean:
	rm -rf $(OBJ_DIR)

# Remove everything created by the make (objects + lib)
fclean: clean
	rm -f $(NAME)

# Rebuild from scratch
re: fclean all

.PHONY: all clean fclean re