# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/27 15:33:54 by donghyk2          #+#    #+#              #
#    Updated: 2023/06/27 15:34:36 by donghyk2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Account

CC				= @c++
CXXFLAGS			= -Wall -Werror -Wextra -std=c++98

SRC				= Account.cpp tests.cpp

%.o: %.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

OBJS			= $(SRC:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $@

clean:
	@rm -f $(OBJS)

fclean:
	@make clean
	@rm -f $(NAME)

re:
	@make fclean
	@make all

.PHONY: all clean fclean re
