NAME		= shooter
CC			= c++
FLAGS		= -Wall -Wextra -Werror -MMD -std=c++98
SRCS		= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS		= $(SRCS:.cpp=.o)
HEADER		=  Weapon.hpp HumanA.hpp HumanB.hpp
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
