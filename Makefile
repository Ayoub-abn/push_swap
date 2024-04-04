NAME = push_swap
CFLGS = -Wall -Wextra -Werror
SRC = ft_atoi.c ft_isdigit.c \
	  ft_putstr.c push_swap.c \
	  ft_lstadd_back.c ft_split.c\
	  ft_strjoin.c moves.c sort_algo.c \
	  fill_stack_a.c push_b_to_a.c

OBG = $(SRC:.c=.o)
%.o: %.c
	@$(CC) -Wall -Wextra -Werror -Imlx -c $< -o $@ 
	@echo "✅"

all: $(NAME)

$(NAME): $(OBG) 
	@$(CC) $(CFLGS) $(OBG) -o $(NAME)
	@rm -f $(OBG)

clean:
	@rm -f $(OBG)
	@echo "🗑"
fclean: clean
	@rm -f $(NAME)
