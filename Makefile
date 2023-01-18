# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enramire <enramire@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 17:57:02 by enramire          #+#    #+#              #
#    Updated: 2023/01/18 18:54:36 by enramire         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS			= -Wall -Werror -Wextra -Iinclude -MMD

CC				= gcc

AR				= ar

NAME			= libftprintf.a

HEADER			= include/libftprintf.h
LIBFT_HEADER	= include/libft.h

SRC_LIBFT		= libft/ft_isalnum.c \
				libft/ft_isalpha.c \
				libft/ft_isascii.c \
				libft/ft_isdigit.c \
				libft/ft_isprint.c \
				libft/ft_strlen.c \
				libft/ft_memset.c \
				libft/ft_bzero.c \
				libft/ft_memcpy.c \
				libft/ft_memmove.c \
				libft/ft_strlcpy.c \
				libft/ft_strlcat.c \
				libft/ft_toupper.c \
				libft/ft_tolower.c \
				libft/ft_strchr.c \
				libft/ft_strrchr.c \
				libft/ft_strncmp.c \
				libft/ft_memchr.c \
				libft/ft_memcmp.c \
				libft/ft_strnstr.c \
				libft/ft_atoi.c \
				libft/ft_calloc.c \
				libft/ft_strdup.c \
				libft/ft_substr.c \
				libft/ft_strjoin.c \
				libft/ft_strtrim.c \
				libft/ft_split.c \
				libft/ft_itoa.c \
				libft/ft_strmapi.c \
				libft/ft_striteri.c \
				libft/ft_putchar_fd.c \
				libft/ft_putstr_fd.c \
				libft/ft_putendl_fd.c \
				libft/ft_putnbr_fd.c \
				libft/ft_lstnew_bonus.c \
				libft/ft_lstadd_front_bonus.c \
				libft/ft_lstsize_bonus.c \
				libft/ft_lstlast_bonus.c \
				libft/ft_lstadd_back_bonus.c \
				libft/ft_lstdelone_bonus.c \
				libft/ft_lstclear_bonus.c \
				libft/ft_lstiter_bonus.c \
				libft/ft_lstmap_bonus.c \

SRCS			= ft_printf.c \
				ft_itoa_oh.c \

OBJS			= $(SRCS:.c=.o)
OBJS_LIBFT		= $(SRC_LIBFT:.c=.o)

DEPS			= $(SRCS:.c=.d)
DEPS_LIBFT		= $(SRC_LIBFT:.c=.d)

all:			$(NAME)

-include		$(DEPS)

$(NAME):		libft $(OBJS) $(HEADER) $(LIBFT_HEADER)
				$(AR) -rcs $(NAME) $(OBJS)

libft:			$(OBJS_LIBFT) $(LIBFT_HEADER)
				$(AR) -rcs $(NAME) $(OBJS_LIBFT)

clean:
				rm -f $(OBJS)
				rm -f $(OBJS_LIBFT)
				rm -f $(DEPS)
				rm -f $(DEPS_LIBFT)

fclean:			clean
				rm -f $(NAME)

re:				fclean all

.PHONY			= fclean clean all re libft
