# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 17:04:37 by agrillet          #+#    #+#              #
#    Updated: 2023/01/09 17:04:37 by agrillet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalnum.c ft_isprint.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcat.c ft_strncmp.c ft_substr.c \
ft_atoi.c ft_isalpha.c ft_itoa.c ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_tolower.c \
ft_bzero.c ft_isascii.c ft_memchr.c ft_memset.c ft_putstr_fd.c ft_striteri.c ft_strlen.c ft_strrchr.c ft_toupper.c \
ft_calloc.c ft_isdigit.c ft_memcmp.c ft_putchar_fd.c ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c 

BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c \
ft_lstnew.c ft_lstsize.c

OBJS = 		${SRCS:.c=.o}

OBJBONUS =	${BONUS:.c=.o}

HEADER = 	libft.h

CC = 		cc

CFLAGS =	-Wall -Werror -Wextra

RM = 		rm -f

NAME = 		libft.a

all:		${NAME}

%.o: %.c	${HEADER}
			${CC} ${CFLAGS} -I. -c $< -o $@
	

${NAME}: 	${OBJS} ${HEADER}
			ar -rcs ${NAME} ${OBJS}

bonus:		${OBJS} ${OBJBONUS}
				ar rcs ${NAME} ${OBJS} ${OBJBONUS}

clean:	
	${RM} ${OBJS} ${OBJBONUS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all fclean clean re