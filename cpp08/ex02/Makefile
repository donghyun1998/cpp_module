NAME			= MutantStack

CXX				= @c++
CXXFLAGS			= -Wall -Werror -Wextra -std=c++11

SRC				= main.cpp

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

OBJS			= $(SRC:.cpp=.o)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

clean:
	@rm -f $(OBJS)

fclean:
	@make clean
	@rm -f $(NAME)

re:
	@make fclean
	@make all

.PHONY: all clean fclean re
