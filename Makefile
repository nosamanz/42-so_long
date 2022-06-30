CC = gcc
FLAGS = -framework OpenGL -framework AppKit -L./minilibx -lmlx -Wall -Wextra -Werror
NAME = so_long
SRCS = get_next_line/*.c libft/*.c Errors/*.c Events/*.c Graphics/*.c Init/*.c *.c
INCLUDES = Includes/*.h

all:
	@echo "\033[1;36m - Compiling..."
	@make -C libft
	@$(CC) $(SRCS) -o $(NAME) $(FLAGS)
	@echo "\033[1;32m     [OK]"


clean:
	@echo "\033[1;35m[🧹Cleaning...🧹]"
	@make clean -C libft

fclean: clean
	@echo "\033[1;35m[🧹FCleaning...🧹]"
	@rm -rf $(NAME)
	@rm -rf $(NAME).dSYM
	@make fclean -C libft

re: fclean all

norm:
	@norminette $(SRCS)
	@norminette $(INCLUDES)

.PHONY: all clean fclean norm re