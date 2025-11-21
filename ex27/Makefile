# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/09 14:12:19 by macamach          #+#    #+#              #
#    Updated: 2025/10/10 11:53:31 by macamach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Executable name
NAME = ft_display_file 

# Compiler command
CC = cc

# Standard and warning flags
CFLAGS = -Wall -Wextra -Werror

# Source files
SRCS = ft_display_file.c

# Object files
OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)	

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# Phony targets prevent conflicts with files that might have the same name
.PHONY: all clean fclean re
