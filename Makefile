# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enramire <enramire@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 17:57:02 by enramire          #+#    #+#              #
#    Updated: 2022/12/26 18:30:20 by enramire         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS			= -Wall -Werror -Wextra -MMD

CC				= gcc

AR				= ar

NAME			= libftprintf.a

HEADER			= include/libftprintf.h
LIBFT_HEADER	= include/libft.h

SRC_LIBFT		= ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c \

SRCS			= ft_printf.c \

OBJS			= $(SRCS:.c=.o)
OBJS_LIBFT		= $(SRC_LIBFT:.c=.o)

DEPS			= $(SRCS:.c=.d)
DEPS_LIBFT		= $(SRC_LIBFT:c=.d)

all:			$(NAME)

-include		$(DEPS)

$(NAME):		libft $(OBJS) $(HEADER) $(LIBFT_HEADER)
				$(AR) -rcs $(NAME) $(OBJS)

libft:			$(OBJS_LIBFT) $(LIBFT_HEADER)
				$(AR) -rcs $(NAME) $(OBJS_LIBFT)


clean:
			rm -f $(OBJS) $(OBJS_LIBFT)
			rm -f $(DEPS) $(DEPS_LIBFT)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY		= fclean clean all re libft
