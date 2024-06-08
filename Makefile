# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 23:50:01 by hshi-yun          #+#    #+#              #
#    Updated: 2024/06/07 16:50:06 by shiyun           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a



CC =gcc
CFLAGS =-Wall -Wextra -Werror

SRC = ft_putchar_fd.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	  ft_isprint.c ft_strlen.c ft_strlcpy.c ft_strncmp.c ft_toupper.c \
	  ft_tolower.c ft_strnstr.c ft_atoi.c ft_memset.c ft_bzero.c ft_memcpy.c \
	  ft_memmove.c ft_putstr_fd.c ft_putendl_fd.c ft_strlcat.c ft_strchr.c \
	  ft_strrchr.c ft_memchr.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c \
	  ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_putnbr_fd.c ft_strmapi.c\

OBJ = $(SRC:.c=.o)

SRC_BONUS = 
OBJ_BONUS = $(SRC_BONUS:.c=.o)



all: $(NAME) 



$(NAME) : $(OBJ)
	@echo ">>> Starting background processing and indexing of files into lib"
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)
	@echo ">>> Processing and indexing completed."
 
bonus : $(OBJ_BONUS)
	@echo ">>> Starting background processing and indexing of files into bonus lib"
	ar rcs $(NAME) $(OBJ_BONUS)
	ranlib $(NAME)
	@echo ">>> Processing and indexing completed."
 


%.o : %.c
	@echo ">>> Compiling .c files to .o files"
	$(CC) $(CFLAGS) -c -o $@ $^



norminette: 
	@echo ">>> Checking norminette for all files"
	norminette -R CheckForbiddenSourceHeader $(SRC) $(SRC_BONUS)

clean: 
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

test: $(NAME) test.c
	cc -o test test.c -L. -lft

.PHONY: all norminette clean fclean re bonus test
