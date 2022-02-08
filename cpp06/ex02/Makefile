NAME		=  IdentifyRealType
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
SRCS		= main.cpp
# Base.cpp A.cpp B.cpp C.cpp
OBJS		= $(SRCS:.cpp=.o)
HEADER		= Base.hpp A.hpp B.hpp C.hpp
VIOLET		= \033[1;35m
%.o:		%.cpp
			$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(VIOLET) Creating $(NAME) ...$(WHITE)"

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY :	all clean fclean re
