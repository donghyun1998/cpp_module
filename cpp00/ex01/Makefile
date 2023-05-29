# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/29 22:53:37 by donghyk2          #+#    #+#              #
#    Updated: 2023/05/29 22:59:33 by donghyk2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME			= phonebook

CC				= @clang++
CFLAGS			= -Wall -Werror -Wextra

SRC				= main.cpp

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

OBJS			= $(SRC:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean:
	@rm -f $(OBJS)

fclean:
	@make clean
	@rm -f $(NAME)

re:
	@make fclean
	@make all

.PHONY: all clean fclean re
