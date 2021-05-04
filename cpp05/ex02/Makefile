NAME = ex01

SRC = 	main.cpp \
		Bureaucrat.cpp \
		Form.cpp \
		PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp \
		ShrubberyCreationForm.cpp


all:
	clang++ -Wall -Werror -Wextra $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re:
	fclean all

clean: fclean