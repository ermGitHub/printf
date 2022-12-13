# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enramire <enramire@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 17:57:02 by enramire          #+#    #+#              #
#    Updated: 2022/12/11 18:21:50 by enramire         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

SRCS		= file.c \

OBJS		= $(SRCS:.c=.o)

DEPS		= $(SRCS:.c=.d)

CFLAGS		= -Wall -Werror -Wextra -MMD

CC			= gcc

all:		$(NAME)

-include	$(DEPS)

$(NAME):	$(OBJS)
			ar -rcs $(NAME) $(OBJS)

clean:		
			rm -f $(OBJS)
			rm -f $(DEPS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY		= fclean clean all re