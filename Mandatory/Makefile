# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabdenou <aabdenou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 19:59:45 by aabdenou          #+#    #+#              #
#    Updated: 2024/04/30 18:35:26 by aabdenou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_1 = checker
CFLGS = -Wall -Wextra -Werror -fsanitize=address -g3
ALL_SRC = crazy_input.c ft_putstr.c \
	  ft_lstadd_back.c ft_split.c\
	  ft_strjoin.c fill_stack_a.c\
	  free_fun.c 
	  
SRC = $(ALL_SRC) push_swap.c moves.c moves_2.c moves_3.c \
		fill_and_sort_array.c push_a_to_b.c sort.c sort_2_3_4_5.c
SRCB = $(ALL_SRC) ../Bonus/checker.c ../Bonus/get_next_line_utils.c \
		 ../Bonus/get_next_line.c ../Bonus/ft_strcmp.c  ../Bonus/moves_bonus.c \
		  ../Bonus/moves_bonus_2.c ../Bonus/moves_bonus_3.c 
	   
OBG = $(SRC:.c=.o)
OBGB = $(SRCB:.c=.o)

%.o: %.c
	@$(CC) $(CFLGS) -c $< -o $@ 
	@echo "✅"

all: $(NAME)

$(NAME): $(OBG) 
	@$(CC) $(CFLGS) $(OBG) -o $(NAME)
	@rm -f $(OBG)

bonus : $(NAME_1)

$(NAME_1): $(OBGB) 
	@$(CC) $(CFLGS) $(OBGB) -o $(NAME_1)
	@rm -f $(OBGB)
	
clean:
	@rm -f $(OBG) $(OBGB)
	@echo "🗑"
fclean: clean
	@rm -f $(NAME) $(NAME_1)
re: fclean all
