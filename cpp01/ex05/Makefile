NAME		= Karen
CC			= c++
FLAGS		= -Wall -Wextra -Werror -MMD -std=c++98
SRCS		= main.cpp Karen.cpp
OBJS		= $(SRCS:.cpp=.o)
HEADER		=  Karen.hpp
%.o:		%.cpp
			$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(HEADER) Makefile
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
			rm -f $(OBJS) *.d

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY :	all clean fclean re
