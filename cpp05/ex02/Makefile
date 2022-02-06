NAME		= Form
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
SRCS		= main.cpp Bureaucrat.cpp Form.cpp \
				PresidentialPardonForm.cpp RobotomyRequestForm.cpp \
				ShrubberyCreationForm.cpp

OBJS		= $(SRCS:.cpp=.o)
HEADER		= Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp \
				RobotomyRequestForm.hpp ShrubberyCreationForm.hpp
VIOLET		= \033[1;35m
%.o:		%.cpp
			$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(HEADER) Makefile
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(VIOLET) Creating $(NAME) ...$(WHITE)"

clean:
			rm -f $(OBJS) target_1_shrubbery target_shrubbery

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY :	all clean fclean re
