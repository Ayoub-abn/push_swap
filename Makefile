# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabdenou <aabdenou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 19:59:45 by aabdenou          #+#    #+#              #
#    Updated: 2024/05/07 16:03:50 by aabdenou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_1 = checker
CFLAGS =  -Wall -Wextra -Werror 
ALL_SRC = ./Mandatory/crazy_input.c ./Mandatory/ft_putstr.c \
	  ./Mandatory/ft_lstadd_back.c ./Mandatory/ft_split.c\
	  ./Mandatory/ft_strjoin.c ./Mandatory/fill_stack_a.c\
	  ./Mandatory/free_fun.c 
	  
SRC = $(ALL_SRC) ./Mandatory/push_swap.c \
	./Mandatory/fill_and_sort_array.c \
	./Mandatory/sort_2_to_5.c\
	./Mandatory/moves_2.c \
	./Mandatory/moves_3.c \
	./Mandatory/moves.c \
	./Mandatory/sort.c \
	./Mandatory/push_a_to_b.c 
SRCB = $(ALL_SRC) ./Bonus/checker.c \
	./Bonus/get_next_line_utils.c \
	./Bonus/get_next_line.c \
	./Bonus/ft_strcmp.c \
	./Bonus/moves_bonus.c \
	./Bonus/moves_bonus_2.c \
	./Bonus/moves_bonus_3.c 
	   
OBG = $(SRC:.c=.o)
OBGB = $(SRCB:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
all: $(NAME)

$(NAME): $(OBG) 
	$(CC) $(CFLAGS) $(OBG) -o $(NAME)

bonus : $(NAME_1)

$(NAME_1): $(OBGB) 
	$(CC) $(CFLAGS) $(OBGB) -o $(NAME_1)
	
clean:
	rm -f $(OBG) $(OBGB)
fclean: clean
	rm -f $(NAME) $(NAME_1)
re: fclean all