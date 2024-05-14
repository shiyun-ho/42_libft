NAME = libft.a



CC = gcc
CFLAGS = -Wall -Wextra -Werror 

SRC = sample1.c sample2.c
OBJ = $(SRC:.c=.o)

SRC_BONUS = bonus1.c bonus2.c
OBJ_BONUS = $(SRC_BONUS:.c=.o)



all: $(NAME) 



$(NAME) : $(OBJ)
	@echo ">>> Starting background processing and indexing of files into lib"
	ar rcs $(NAME) $(OBJ)
	randlib $(NAME)
	@echo ">>> Processing and indexing completed."
 
bonus : $(OBJ_BONUS)
	@echo ">>> Starting background processing and indexing of files into bonus lib"
	ar rcs $(NAME) $(OBJ_BONUS)
	randlib $(NAME)
	@echo ">>> Processing and indexing completed."
 


%.o : %.c
	@echo ">>> Compiling .c files to .o files"
	$(CC) $(CFLAGS) -c -o $@ $^



norminette: 
	@echo ">>> Checking norminette for all files"
	norminette -R CheckForbiddenSourceHeader $(SRC) $(SRC_BONUS)

clean: 
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)



.PHONY: norminette all clean fclean re bonus
