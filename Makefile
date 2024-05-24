# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 23:50:01 by hshi-yun          #+#    #+#              #
#    Updated: 2024/05/24 15:51:58 by shiyun           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a



CC =gcc
CFLAGS =-Wall -Wextra -Werror

SRC = ft_putchar_fd.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	  ft_isprint.c ft_strlen.c ft_strlcpy.c ft_strncmp.c ft_toupper.c \
	  ft_tolower.c ft_strnstr.c

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
