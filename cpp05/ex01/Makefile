NAME		= Form
CC			= g++
FLAGS		= -Wall -Wextra -Werror -std=c++98
SRCS		= main.cpp Bureaucrat.cpp Form.cpp
OBJS		= $(SRCS:.cpp=.o)
HEADER		=  Bureaucrat.hpp Form.hpp
VIOLET		= \033[1;35m
%.o:		%.cpp
			$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(HEADER) Makefile
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(VIOLET) Creating $(NAME) ...$(WHITE)"

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY :	all clean fclean re
