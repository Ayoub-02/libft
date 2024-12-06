# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aben-moh <aben-moh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/03 22:39:59 by aben-moh          #+#    #+#              #
#    Updated: 2024/11/14 22:09:41 by aben-moh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =		ft_isalnum.c\
			ft_isprint.c\
			ft_memcmp.c\
			ft_putchar_fd.c\
			ft_split.c\
			ft_strlcat.c\
			ft_strncmp.c\
			ft_substr.c\
			ft_atoi.c\
			ft_isalpha.c\
			ft_itoa.c\
			ft_memcpy.c\
			ft_putendl_fd.c\
			ft_strchr.c\
			ft_strlcpy.c\
			ft_strnstr.c\
			ft_tolower.c\
			ft_bzero.c\
			ft_isascii.c\
			ft_memmove.c\
			ft_putnbr_fd.c\
			ft_strdup.c\
			ft_strlen.c\
			ft_strrchr.c\
			ft_toupper.c\
			ft_calloc.c\
			ft_isdigit.c\
			ft_memchr.c\
			ft_memset.c\
			ft_putstr_fd.c\
			ft_strjoin.c\
			ft_strmapi.c\
			ft_strtrim.c\
			ft_striteri.c
			
BSOURCES =	ft_lstnew_bonus.c\
			ft_lstadd_front_bonus.c\
			ft_lstsize_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstadd_back_bonus.c\
			ft_lstdelone_bonus.c\
			ft_lstclear_bonus.c\
			ft_lstiter_bonus.c\
			ft_lstmap_bonus.c

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = cc

OBJ = $(SRC:%.c=%.o)
BONUS_OBJ = $(BSOURCES:%.c=%.o)

all : $(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)

bonus: bonusfile

bonusfile:	$(BONUS_OBJ) libft.h
		ar rcs $(NAME) $?
		touch bonusfile

%.o: %.c libft.h													
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -rf  $(OBJ)  $(BONUS_OBJ) bonusfile

fclean:
		rm -f $(NAME)  $(OBJ)  $(BONUS_OBJ) bonusfile

re: fclean all

.PHONY: all fclean clean re bonus