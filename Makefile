NAME = push_swap
CFLGS = -Wall -Wextra -Werror #-fsanitize=address -g3
SRC = ft_atoi.c ft_isdigit.c \
	  ft_putstr.c push_swap.c \
	  ft_lstadd_back.c ft_split.c\
	  ft_strjoin.c moves.c fill_stack_a.c\
	  fill_and_sort_array.c push_a_to_b.c

OBG = $(SRC:.c=.o)
%.o: %.c
	@$(CC) $(CFLGS) -c $< -o $@ 
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
