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

SRCS_FILES = ft_printf ft_putnbr_base_unsigned ft_print_hexa ft_printf_utilities

NAME = libftprintf.a

HEADER = include/ft_printf.h

INCLUDE = include

SRC_DIR = src/

OBJ_DIR = obj/

LIBFT = ./Libft

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I

RM = rm -f

AR = ar rcs

SRC		= $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRCS_FILES)))

OBJ 	= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRCS_FILES)))

OBJF	=	.cache_exists

all :	Libft $(NAME)

$(NAME):	$(OBJ)	$(HEADER)
				@make -C $(LIBFT)
				@cp Libft/libft.a ./
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