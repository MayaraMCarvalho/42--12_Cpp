# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/19 16:33:22 by macarval          #+#    #+#              #
#    Updated: 2024/04/04 20:17:53 by macarval         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ClapTrap

SRCS		= main.cpp ClapTrap.cpp

VPATH		= src/
OBJS_PATH	= obj
INCLUDE		= -I./include

FLAGS		= -g3 -Wall -Wextra -Werror -g -std=c++98 -Wpedantic
CC			= c++

#colors
GREEN		= \033[0;32m
YELLOW		= \033[0;33m
BLUE		= \033[0;34m
MAGENTA		= \033[0;35m
CYAN		= \033[0;36m
RESET		= \033[0m

OBJS 		= $(addprefix $(OBJS_PATH)/, $(SRCS:.cpp=.o))

all: 		$(NAME)

$(NAME): 	$(OBJS_PATH) $(OBJS)
			@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
			@echo "\n$(CYAN)$(NAME): $(GREEN)Done!$(RESET)\n"

$(OBJS_PATH):
			@mkdir -p $(OBJS_PATH)

$(OBJS_PATH)/%.o: %.cpp
			@$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@
			@echo -n "$(YELLOW)Generating $(CYAN)$(NAME) $(YELLOW)objects..." $@
			@echo -n "\n"

clean:
			@rm -rf $(OBJS_PATH)
			@echo "$(CYAN)$(NAME): $(GREEN)Clean done!$(RESET)"

fclean:		clean
			@rm -f $(NAME)
			@echo "$(CYAN)$(NAME): $(GREEN)Full clean done!$(RESET)"


re:			fclean all

comp:
			clear
			@make -s re
			@./$(NAME)

val:
			clear
			@make -s re
			@valgrind ./$(NAME)

.PHONY:		all re clean fclean comp val
