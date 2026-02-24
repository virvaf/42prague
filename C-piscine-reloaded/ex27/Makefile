# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fvirva <fvirva@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/11 18:28:01 by fvirva            #+#    #+#              #
#    Updated: 2025/11/11 19:44:49 by fvirva           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = ft_display_file
CC     = cc
CFLAGS = -Wall -Wextra -Werror

SRC    = main.c
OBJ    = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

.PHONY: clean fclean
