NAME		= zombie_horde
CC			= c++
FLAGS		= -Wall -Wextra -Werror -I. -std=c++98
SRCS		= main.cpp Zombie.cpp ZombieHorde.cpp
OBJS		= $(SRCS:.cpp=.o)
HEADER		= Zombie.hpp
%.o:		%.cpp
			$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(HEADER)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY :	all clean fclean re