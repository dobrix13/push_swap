# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/13 13:33:40 by avitolin          #+#    #+#              #
#    Updated: 2021/12/14 13:41:48 by avitolin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

BNS := ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstsize.c \
		ft_lstlast.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

SRC := \
	ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memccpy.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_atol.c \
	ft_abs.c \
	ft_isspace.c \
	

OBJS :=$(SRC:.c=.o)
OBJB :=$(BNS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(OBJB)
	ar rcs $(NAME) $(OBJS) $(OBJB)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS) $(OBJB)

fclean:
	rm -rf $(NAME) $(OBJS) $(OBJB)

re: fclean all

norm:
	norminette -R CheckForbiddenSourceHeader ft_*.c *.h
