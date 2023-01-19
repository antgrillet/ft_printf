# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 17:51:27 by agrillet          #+#    #+#              #
#    Updated: 2023/01/19 18:19:18 by agrillet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_FILES = ft_printf.c ft_putnbr_base_signed.c ft_putnbr_base_unsigned.c ft_print_hexa.c

NAME = libftprintf.a

MAKE = make

INCLUDE = INCLUDE

SRC_DIR = src/

OBJ_DIR = obj/

LIBFT = libft

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I

RM = rm -f

AR = ar rcs

SRC		= $(addprefix $(SRC_DIR) $(SRCS_FILES)))

OBJ 	= $(addprefix $(OBJ_DIR) $(SRCS_FILES)))

OBJF	=	.cache_exists

all : $(NAME)

$(NAME):	$(OBJ)
			@make -C $(LIBFT)
			@cp libft/libft.a
			@mv libft.a $(NAME)
			@$(AR) $(NAME) $(OBJ)
			
$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJF)
			@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
			
$(OBJF):
			@mkdir -p $(OBJ_DIR)
			
clean:
		@$(RM) -rf $(OBJ_DIR)
		@make clean -C $(LIBFT)

fclean :	clean
		@$(RM) $(NAME)
		@$(RM) $(LIBFT)/libft.a
		
re: fclean all

.PHONY : all clean fclean re