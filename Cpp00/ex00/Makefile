# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/19 16:33:22 by macarval          #+#    #+#              #
#    Updated: 2024/03/21 15:25:34 by macarval         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone

SRCS		= src/megaphone.cpp

OBJS_PATH	= obj

CFLAGS		= -Wall -Wextra -Werror -g -std=c++98
CC			= c++

OBJS 		= $(addprefix ${OBJS_PATH}/, ${SRCS:.cpp=.o})


all: 		$(NAME)

$(NAME): 	$(OBJS)
			@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
			@echo megaphone compile

$(OBJS_PATH)/%.o: %.cpp
			@mkdir -p $(@D)
			@$(CC) $(CFLAGS) -c $< -o $@

clean:
			@rm -rf $(OBJS_PATH)
			@echo "clean Done!"

fclean:		clean
			@rm -f $(NAME)
			@echo "full clean Done!"

re:			clean all

.PHONY:		all re clean fclean test
