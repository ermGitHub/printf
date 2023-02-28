# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fxadmin <fxadmin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 17:57:02 by enramire          #+#    #+#              #
#    Updated: 2023/02/28 13:08:34 by fxadmin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS			= -Wall -Werror -Wextra -MMD

CC				= gcc

AR				= ar

NAME			= libftprintf.a

SRCS			= ft_printf.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putnbr_u_fd.c \
				ft_putnbr_xx_fd.c \
				ft_putnbr_fd.c \
				ft_putptr_x_fd.c \

OBJS			= $(SRCS:.c=.o)

DEPS			= $(SRCS:.c=.d)

all:			$(NAME)

-include		$(DEPS)

$(NAME):		$(OBJS)
				$(AR) -rcs $(NAME) $(OBJS)

clean:
				rm -f $(OBJS)
				rm -f $(DEPS)

fclean:			clean
				rm -f $(NAME)

re:				fclean all

.PHONY			= fclean clean all re
