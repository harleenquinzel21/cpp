NAME		= replace
CC			= c++
FLAGS		= -Wall -Wextra -Werror -MMD -std=c++98
SRCS		= main.cpp
OBJS		= $(SRCS:.cpp=.o)
%.o:		%.cpp
			$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS) Makefile
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
			rm -f $(OBJS) *.replace *.d

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY :	all clean fclean re
