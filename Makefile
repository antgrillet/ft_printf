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

LIB_DIR = Libft/

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I

RM = rm -f

AR = ar rcs

SRC		= $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRCS_FILES)))

OBJ 	= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRCS_FILES)))

LIBFT           = $(addprefix $(LIB_DIR), libft.a)

OBJF	=	.cache

all :	$(NAME)

$(NAME):	$(LIBFT) $(OBJ) $(HEADER)
				cp Libft/libft.a ./
				mv libft.a $(NAME)
				$(AR) $(NAME) $(OBJ)
			
$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJF)
							$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
			
$(OBJF):
							@mkdir -p $(OBJ_DIR)

$(LIBFT):	FORCE
			make -C $(LIB_DIR)

FORCE :
			
clean:
		@$(RM) -rf $(OBJ_DIR)
		@make clean -C ./Libft

fclean :	clean
		@$(RM) $(NAME)
		@$(RM) Libft/libft.a
		
re: fclean all

.PHONY : all clean fclean re